/*
 * XREFs of KiIntersectFeaturesWithPolicy @ 0x1405A2C54
 * Callers:
 *     KiInitializeXSave @ 0x1405A2950 (KiInitializeXSave.c)
 * Callees:
 *     KiGetProcessorInformation @ 0x1401954E0 (KiGetProcessorInformation.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiIsXSaveFeatureAllowed @ 0x1405A2DAC (KiIsXSaveFeatureAllowed.c)
 *     KiLoadPolicyFromImage @ 0x1405A2E40 (KiLoadPolicyFromImage.c)
 */

__int64 __fastcall KiIntersectFeaturesWithPolicy(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v3; // edi
  __int64 v4; // r14
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v7; // r12
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  unsigned __int64 v11; // rdx
  unsigned int v12; // r13d
  unsigned int v13; // ecx
  char IsXSaveFeatureAllowed; // al
  unsigned int v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]

  result = 0LL;
  v3 = 0;
  v4 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( *a2 )
  {
    result = KiLoadPolicyFromImage(a1, &v17, &v18);
    if ( (_DWORD)result == -1073741204 )
    {
      *a2 = 0LL;
      a2[67] = 0LL;
      *((_DWORD *)a2 + 5) &= 0xFFFFFFFC;
    }
    else
    {
      KiGetProcessorInformation(&v19, (_DWORD *)&v20 + 1, &v16, &v15);
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = a2[67];
      v8 = *a2;
      v9 = *a2 | v7;
      v18 = v7;
      result = CurrentPrcb->UpdateSignature.QuadPart;
      v21 = result;
      if ( v9 )
      {
        v10 = v17;
        do
        {
          v11 = v9;
          if ( v3 >= 0x40 )
            break;
          if ( (v9 & 1) != 0 )
          {
            result = *(_QWORD *)(v10 + 16);
            if ( _bittest64(&result, v3) )
            {
              result = *(unsigned int *)(v10 + 24);
              v12 = 0;
              v15 = result;
              if ( (_DWORD)result )
              {
                v13 = v15;
                result = v10 + 32;
                v16 = v10 + 32;
                do
                {
                  if ( *(_DWORD *)result == v3 )
                  {
                    IsXSaveFeatureAllowed = KiIsXSaveFeatureAllowed(v10, v12, CurrentPrcb, &v19);
                    v13 = v15;
                    if ( IsXSaveFeatureAllowed )
                      _bittestandset64(&v4, v3);
                    result = v16;
                  }
                  result += 16LL;
                  ++v12;
                  v16 = result;
                }
                while ( v12 < v13 );
                v11 = v9;
              }
            }
          }
          v9 >>= 1;
          ++v3;
        }
        while ( v11 >= 2 );
        v7 = v18;
      }
      *a2 = v4 & v8;
      a2[67] = v4 & v7;
    }
  }
  return result;
}
