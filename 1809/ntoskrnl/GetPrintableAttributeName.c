/*
 * XREFs of GetPrintableAttributeName @ 0x1408A9268
 * Callers:
 *     LocalpGetStringForCondition @ 0x1408ABB30 (LocalpGetStringForCondition.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 *     EncodeAttributeName @ 0x1408A846C (EncodeAttributeName.c)
 */

__int64 __fastcall GetPrintableAttributeName(__int64 a1, int a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // esi
  unsigned int v8; // r15d
  void *v9; // r14
  size_t v10; // r13
  unsigned int v11; // eax
  __int64 v12; // r15
  unsigned int v13; // edx
  size_t v14; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // eax
  unsigned __int64 v17; // r12
  char *v18; // rdi
  const wchar_t *v19; // rdx
  __int64 v20; // rax
  _DWORD *v21; // r15
  int v22; // esi
  char *v23; // rcx
  void *Src; // [rsp+20h] [rbp-48h] BYREF

  Src = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( a1 && a4 && a2 )
  {
    *a5 = 1;
    if ( (unsigned int)(a2 - 1) < 4 )
      return 1336;
    v10 = *(unsigned int *)(a1 + 1);
    *a5 = 5;
    if ( a2 - 5 < (unsigned int)v10 )
    {
      return 1336;
    }
    else
    {
      if ( a3 != -8 )
      {
        v11 = EncodeAttributeName((unsigned __int16 *)(a1 + 5), v10, (__int64 *)&Src);
        v9 = Src;
        v6 = v11;
        if ( v11 )
          goto LABEL_43;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_WORD *)Src + v12) );
        v8 = 2 * v12;
        v13 = -1;
        if ( v8 + 2 < v8 )
          goto LABEL_13;
        v14 = v8 + 2;
LABEL_17:
        v15 = v14;
        switch ( a3 )
        {
          case -5:
            v7 = 16;
            v16 = v14 + 16;
            break;
          case -7:
            v7 = 12;
            v16 = v14 + 12;
            break;
          case -6:
            v7 = 20;
            v16 = v14 + 20;
            break;
          case -4:
            v7 = 14;
            v16 = v14 + 14;
            break;
          default:
            goto LABEL_22;
        }
        if ( v16 >= (unsigned int)v14 )
          v13 = v16;
        v14 = v13;
        if ( v16 >= v15 )
        {
LABEL_22:
          v17 = (unsigned int)v14;
          v18 = (char *)SddlpAlloc(v14);
          *a4 = v18;
          if ( !v18 )
          {
            v6 = 8;
            goto LABEL_43;
          }
          if ( a3 == -5 )
          {
            v19 = L"@DEVICE.";
          }
          else if ( a3 == -7 )
          {
            v19 = L"@USER.";
          }
          else
          {
            if ( a3 != -6 )
            {
              if ( a3 == -4 )
                memmove(v18, L"@TOKEN.", v7);
              v20 = v7;
              if ( a3 == -8 )
              {
                v21 = a5;
                v23 = &v18[v7];
                v22 = *a5;
                memmove(v23, (const void *)(a1 + (unsigned int)*a5), v10);
                goto LABEL_42;
              }
LABEL_40:
              memmove(&v18[v20], v9, v8);
              v21 = a5;
              v22 = *a5;
LABEL_42:
              *(_WORD *)&v18[2 * (v17 >> 1) - 2] = 0;
              *v21 = v22 + v10;
LABEL_43:
              if ( v9 )
                ExFreePoolWithTag(v9, 0);
              return v6;
            }
            v19 = L"@RESOURCE.";
          }
          memmove(v18, v19, v7);
          v20 = v7;
          goto LABEL_40;
        }
LABEL_13:
        v6 = 534;
        goto LABEL_43;
      }
      v13 = -1;
      if ( (int)v10 + 2 >= (unsigned int)v10 )
      {
        v14 = (unsigned int)(v10 + 2);
        goto LABEL_17;
      }
      return 534;
    }
  }
  return 87LL;
}
