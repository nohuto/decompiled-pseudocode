/*
 * XREFs of KiIntersectFeaturesWithPolicy @ 0x140574624
 * Callers:
 *     KiInitializeXSave @ 0x1405742C0 (KiInitializeXSave.c)
 * Callees:
 *     KiGetProcessorInformation @ 0x14018BDB0 (KiGetProcessorInformation.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiIsXSaveFeatureAllowed @ 0x140574770 (KiIsXSaveFeatureAllowed.c)
 *     KiLoadPolicyFromImage @ 0x140574804 (KiLoadPolicyFromImage.c)
 */

void __fastcall KiIntersectFeaturesWithPolicy(__int64 a1, __int64 *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // r13
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r12d
  unsigned int v13; // ecx
  _DWORD *v14; // rax
  char IsXSaveFeatureAllowed; // al
  unsigned int v16; // [rsp+20h] [rbp-78h] BYREF
  _DWORD *v17; // [rsp+28h] [rbp-70h] BYREF
  __int64 v18; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v20[3]; // [rsp+40h] [rbp-58h] BYREF
  int v21; // [rsp+4Ch] [rbp-4Ch] BYREF
  _LARGE_INTEGER UpdateSignature; // [rsp+50h] [rbp-48h]

  v2 = 0;
  v3 = 0LL;
  if ( *a2 )
  {
    if ( (unsigned int)KiLoadPolicyFromImage(a1, &v18, v19) == -1073741204 )
    {
      *a2 = 0LL;
      a2[67] = 0LL;
      *((_DWORD *)a2 + 5) &= 0xFFFFFFFC;
    }
    else
    {
      KiGetProcessorInformation(v20, &v21, &v17, &v16);
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = a2[67];
      v7 = *a2;
      v8 = *a2 | v6;
      UpdateSignature = CurrentPrcb->UpdateSignature;
      if ( v8 )
      {
        v9 = v18;
        do
        {
          v10 = v8;
          if ( v2 >= 0x40 )
            break;
          if ( (v8 & 1) != 0 )
          {
            v11 = *(_QWORD *)(v9 + 16);
            if ( _bittest64(&v11, v2) )
            {
              v12 = 0;
              v16 = *(_DWORD *)(v9 + 24);
              if ( v16 )
              {
                v13 = v16;
                v14 = (_DWORD *)(v9 + 32);
                v17 = (_DWORD *)(v9 + 32);
                do
                {
                  if ( *v14 == v2 )
                  {
                    IsXSaveFeatureAllowed = KiIsXSaveFeatureAllowed(v9, v12, CurrentPrcb, v20);
                    v13 = v16;
                    if ( IsXSaveFeatureAllowed )
                      _bittestandset64(&v3, v2);
                    v14 = v17;
                  }
                  v14 += 4;
                  ++v12;
                  v17 = v14;
                }
                while ( v12 < v13 );
                v10 = v8;
              }
            }
          }
          v8 >>= 1;
          ++v2;
        }
        while ( v10 >= 2 );
      }
      *a2 = v3 & v7;
      a2[67] = v3 & v6;
    }
  }
}
