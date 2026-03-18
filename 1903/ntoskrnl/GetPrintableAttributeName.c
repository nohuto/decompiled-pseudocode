/*
 * XREFs of GetPrintableAttributeName @ 0x1408E5360
 * Callers:
 *     LocalpGetStringForCondition @ 0x1408E7AA0 (LocalpGetStringForCondition.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406EC2DC (SddlpAlloc.c)
 *     EncodeAttributeName @ 0x1408E4584 (EncodeAttributeName.c)
 */

__int64 __fastcall GetPrintableAttributeName(__int64 a1, int a2, char a3, _QWORD *a4, int *a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // esi
  void *v8; // r14
  size_t v9; // r13
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned __int64 v14; // r15
  char *v15; // rdi
  const wchar_t *v16; // rdx
  __int64 v17; // rax
  int v18; // esi
  void *Src; // [rsp+20h] [rbp-48h] BYREF
  size_t Size; // [rsp+28h] [rbp-40h]

  LODWORD(Size) = 0;
  Src = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( a1 && a4 && a2 )
  {
    *a5 = 1;
    if ( (unsigned int)(a2 - 1) < 4 )
      return 1336;
    v9 = *(unsigned int *)(a1 + 1);
    *a5 = 5;
    if ( a2 - 5 < (unsigned int)v9 )
    {
      return 1336;
    }
    else
    {
      if ( a3 != -8 )
      {
        v10 = EncodeAttributeName((unsigned __int16 *)(a1 + 5), v9, (__int64 *)&Src);
        v8 = Src;
        v6 = v10;
        if ( v10 )
          goto LABEL_39;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_WORD *)Src + v11) );
        Size = (unsigned int)(2 * v11);
        v12 = Size + 2;
        if ( (int)Size + 2 < (unsigned int)Size )
          goto LABEL_22;
        switch ( a3 )
        {
          case -5:
            v7 = 16;
            v13 = Size + 18;
            break;
          case -7:
            v7 = 12;
            v13 = Size + 14;
            break;
          case -6:
            v7 = 20;
            v13 = Size + 22;
            break;
          case -4:
            v7 = 14;
            v13 = Size + 16;
            break;
          default:
            goto LABEL_24;
        }
        if ( v13 < v12 )
        {
LABEL_22:
          v6 = 534;
          goto LABEL_39;
        }
        v12 = v13;
LABEL_24:
        v14 = v12;
        v15 = (char *)SddlpAlloc(v12);
        *a4 = v15;
        if ( !v15 )
        {
          v6 = 8;
          goto LABEL_39;
        }
        if ( a3 == -5 )
        {
          v16 = L"@DEVICE.";
        }
        else if ( a3 == -7 )
        {
          v16 = L"@USER.";
        }
        else
        {
          if ( a3 != -6 )
          {
            if ( a3 == -4 )
              memmove(v15, L"@TOKEN.", v7);
            v17 = v7;
            if ( a3 == -8 )
            {
              v18 = *a5;
              memmove(&v15[v17], (const void *)(a1 + (unsigned int)*a5), v9);
              goto LABEL_38;
            }
LABEL_36:
            memmove(&v15[v17], v8, (unsigned int)Size);
            v18 = *a5;
LABEL_38:
            *(_WORD *)&v15[2 * (v14 >> 1) - 2] = 0;
            *a5 = v18 + v9;
LABEL_39:
            if ( v8 )
              ExFreePoolWithTag(v8, 0);
            return v6;
          }
          v16 = L"@RESOURCE.";
        }
        memmove(v15, v16, v7);
        v17 = v7;
        goto LABEL_36;
      }
      v12 = v9 + 2;
      if ( (int)v9 + 2 >= (unsigned int)v9 )
        goto LABEL_24;
      return 534;
    }
  }
  return 87LL;
}
