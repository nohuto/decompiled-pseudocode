/*
 * XREFs of CmpQueryKeyValueData @ 0x140661170
 * Callers:
 *     CmQueryValueKey @ 0x1405FE220 (CmQueryValueKey.c)
 *     CmEnumerateValueKey @ 0x140660F30 (CmEnumerateValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14082750C (CmEnumerateValueFromLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14082AEF4 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x140660810 (CmpCopyCompressedName.c)
 *     CmpGetValueData @ 0x140661700 (CmpGetValueData.c)
 */

__int64 __fastcall CmpQueryKeyValueData(__int64 a1, int a2, __int64 a3, int a4, _DWORD *Size, unsigned int a6, int *a7)
{
  __int64 v9; // r11
  unsigned int v10; // r13d
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  unsigned __int16 v13; // cx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // r14d
  unsigned int v18; // esi
  int v20; // r9d
  unsigned int v21; // r10d
  unsigned int v22; // r15d
  unsigned int v23; // eax
  int v24; // edx
  unsigned int v25; // r12d
  size_t v26; // r8
  unsigned int v27; // r8d
  unsigned int i; // eax
  unsigned int v29; // edx
  void *v30; // rcx
  int v31; // r9d
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // r8d
  unsigned int v35; // esi
  void *Src; // [rsp+48h] [rbp-60h] BYREF
  _DWORD v37[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v38; // [rsp+58h] [rbp-50h]
  __int64 v39; // [rsp+60h] [rbp-48h]
  unsigned int v42; // [rsp+C0h] [rbp+18h]
  char v43; // [rsp+C8h] [rbp+20h] BYREF

  v9 = a1;
  v10 = a6;
  v11 = 0;
  Src = 0LL;
  v43 = 0;
  v37[0] = -1;
  v37[1] = 0;
  v39 = *(_QWORD *)(a1 + 32);
  v12 = Size;
  v38 = a3;
  v13 = *(_WORD *)(a3 + 2);
  if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
    v13 *= 2;
  if ( a4 == 2 )
  {
    v14 = *(_DWORD *)(a3 + 4);
    if ( v14 >= 0x80000000 )
    {
      v15 = v14 + 0x80000000;
      LODWORD(Size) = v14 + 0x80000000;
      v16 = v14 + 0x80000000;
    }
    else
    {
      v15 = *(_DWORD *)(a3 + 4);
      LODWORD(Size) = v15;
      v16 = v14;
    }
    v17 = 0;
    *a7 = v16 + 12;
    if ( v10 < 0xC )
    {
      v17 = -1073741789;
    }
    else
    {
      *v12 = 0;
      v12[1] = *(_DWORD *)(a3 + 12);
      v12[2] = v15;
      v18 = v10 - 12;
      if ( v10 - 12 < v16 )
        v17 = -2147483643;
      if ( v18 >= v16 )
        v18 = v16;
      if ( v16 )
      {
        if ( v14 >= 0x80000000 )
        {
          Src = (void *)(a3 + 8);
        }
        else if ( !(unsigned __int8)CmpGetValueData(
                                      *(_QWORD *)(v9 + 32),
                                      a2,
                                      a3,
                                      (unsigned int)&Size,
                                      (__int64)&Src,
                                      (__int64)&v43,
                                      (__int64)v37) )
        {
          v17 = -1073741670;
        }
        if ( Src )
          memmove(v12 + 3, Src, v18);
      }
    }
  }
  else if ( a4 )
  {
    v20 = a4 - 1;
    if ( v20 && (v31 = v20 - 2) != 0 )
    {
      if ( v31 == 1 )
      {
        v32 = *(_DWORD *)(a3 + 4);
        if ( v32 < 0x80000000 )
        {
          v33 = *(_DWORD *)(a3 + 4);
          LODWORD(Size) = v33;
          v34 = v32;
        }
        else
        {
          v33 = v32 + 0x80000000;
          LODWORD(Size) = v32 + 0x80000000;
          v34 = v32 + 0x80000000;
        }
        v17 = 0;
        *a7 = v34 + 8;
        if ( v10 < 8 )
        {
          v17 = -1073741789;
        }
        else
        {
          *v12 = *(_DWORD *)(a3 + 12);
          v12[1] = v33;
          v35 = v34;
          if ( v10 - 8 < v34 )
          {
            v35 = v10 - 8;
            v17 = -2147483643;
          }
          if ( v34 )
          {
            if ( v32 < 0x80000000 )
            {
              if ( !(unsigned __int8)CmpGetValueData(
                                       *(_QWORD *)(v9 + 32),
                                       a2,
                                       a3,
                                       (unsigned int)&Size,
                                       (__int64)&Src,
                                       (__int64)&v43,
                                       (__int64)v37) )
                v17 = -1073741670;
            }
            else
            {
              Src = (void *)(a3 + 8);
            }
            if ( Src )
              memmove(v12 + 2, Src, v35);
          }
        }
      }
      else
      {
        v17 = -1073741811;
      }
    }
    else
    {
      v21 = *(_DWORD *)(a3 + 4);
      v42 = v21;
      if ( v21 >= 0x80000000 )
      {
        v22 = v21 + 0x80000000;
        LODWORD(Size) = v21 + 0x80000000;
        v23 = v21 + 0x80000000;
      }
      else
      {
        v22 = *(_DWORD *)(a3 + 4);
        LODWORD(Size) = v22;
        v23 = v21;
      }
      v24 = v13 + v23 + 20;
      v25 = 0;
      if ( v23 )
      {
        v25 = (v13 + 27) & 0xFFFFFFF8;
        if ( v25 > (unsigned int)v13 + 20 )
          v24 = v25 + v23;
      }
      v17 = 0;
      *a7 = v24;
      if ( v10 < 0x14 )
      {
        v17 = -1073741789;
      }
      else
      {
        *v12 = 0;
        v12[1] = *(_DWORD *)(a3 + 12);
        v12[3] = v22;
        v12[4] = v13;
        v26 = v10 - 20;
        if ( (unsigned int)v26 >= v13 )
          v26 = v13;
        else
          v17 = -2147483643;
        if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
        {
          v27 = (unsigned int)v26 >> 1;
          if ( v27 >= *(unsigned __int16 *)(a3 + 2) )
            v27 = *(unsigned __int16 *)(a3 + 2);
          for ( i = 0; i < v27; ++i )
            *((_WORD *)v12 + i + 10) = *(unsigned __int8 *)(i + a3 + 20);
        }
        else
        {
          memmove(v12 + 5, (const void *)(a3 + 20), v26);
          v21 = v42;
          v9 = a1;
        }
        if ( v22 )
        {
          if ( v21 >= 0x80000000 )
          {
            Src = (void *)(a3 + 8);
          }
          else
          {
            if ( !(unsigned __int8)CmpGetValueData(
                                     *(_QWORD *)(v9 + 32),
                                     a2,
                                     a3,
                                     (unsigned int)&Size,
                                     (__int64)&Src,
                                     (__int64)&v43,
                                     (__int64)v37) )
              v17 = -1073741670;
            v22 = (unsigned int)Size;
          }
          v12[2] = v25;
          if ( v10 >= v25 )
            v11 = v10 - v25;
          if ( v11 >= v22 )
            v11 = v22;
          else
            v17 = -2147483643;
          if ( Src )
            memmove((char *)v12 + v25, Src, v11);
        }
        else
        {
          v12[2] = -1;
        }
      }
    }
  }
  else
  {
    v17 = 0;
    *a7 = v13 + 12;
    if ( v10 < 0xC )
    {
      v17 = -1073741789;
    }
    else
    {
      *v12 = 0;
      v12[1] = *(_DWORD *)(a3 + 12);
      v12[2] = v13;
      v29 = v10 - 12;
      if ( v10 - 12 >= v13 )
        v29 = v13;
      else
        v17 = -2147483643;
      v30 = v12 + 3;
      if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
        CmpCopyCompressedName((unsigned __int64)v30, v29, a3 + 20, *(unsigned __int16 *)(a3 + 2));
      else
        memmove(v30, (const void *)(a3 + 20), v29);
    }
  }
  if ( Src && Src != (void *)(a3 + 8) )
  {
    if ( v43 == 1 )
      ExFreePoolWithTag(Src, 0);
    else
      (*(void (__fastcall **)(__int64, _DWORD *))(v39 + 16))(v39, v37);
  }
  return v17;
}
