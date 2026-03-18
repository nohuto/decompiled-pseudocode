/*
 * XREFs of ?bCopySection@@YAHPEAX0_K@Z @ 0x1C0286190
 * Callers:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C0123378 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C0285E7C (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 * Callees:
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall bCopySection(void *a1, void *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned int v6; // ebx
  int v7; // r14d
  int v8; // r15d
  bool v9; // zf
  __int64 v10; // r13
  unsigned __int64 v11; // rsi
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  size_t v17; // rax
  size_t v18; // rcx
  size_t v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v23; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-80h] BYREF
  void *v25; // [rsp+60h] [rbp-78h] BYREF
  void *Src; // [rsp+68h] [rbp-70h] BYREF
  int v27; // [rsp+70h] [rbp-68h]
  unsigned __int64 v28; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-50h]
  unsigned __int64 v31; // [rsp+90h] [rbp-48h]

  v4 = a3;
  v5 = a3;
  v30 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v27 = 0;
  while ( 1 )
  {
    v9 = v5 == 0;
    if ( !v5 )
      break;
    v10 = v5;
    if ( v5 > 0x10000 )
      v10 = 0x10000LL;
    v11 = v4 - v5;
    v31 = v4 - v5;
    v28 = v4 - v5;
    v29 = v4 - v5;
    v25 = 0LL;
    Src = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    CurrentProcess = PsGetCurrentProcess(0x10000LL, a2, a3, a4);
    if ( (int)MmMapViewOfSection(a1, CurrentProcess, &v25, 0LL, v10, &v28, &v23, 2, 0x400000, 4) < 0 )
    {
      v25 = 0LL;
      v23 = 0LL;
    }
    if ( v23 )
    {
      v14 = PsGetCurrentProcess(v13, a2, a3, a4);
      if ( (int)MmMapViewOfSection(a2, v14, &Src, 0LL, v10, &v29, &v24, 2, 0x400000, 2) < 0 )
      {
        Src = 0LL;
        v24 = 0LL;
      }
    }
    if ( v23 && v24 )
    {
      v15 = v11 - v28;
      v16 = v11 - v29;
      v25 = (char *)v25 + v15;
      Src = (char *)Src + v16;
      if ( v23 <= v15 )
      {
        v23 = 0LL;
        v17 = 0LL;
      }
      else
      {
        v17 = v23 - v15;
        v23 -= v15;
      }
      if ( v24 <= v16 )
      {
        v24 = 0LL;
        v18 = 0LL;
      }
      else
      {
        v18 = v24 - v16;
        v24 -= v16;
      }
      if ( v17 >= v18 )
        v17 = v18;
      v19 = v5;
      if ( v17 < v5 )
        v19 = v17;
      memmove(v25, Src, v19);
    }
    else
    {
      v19 = 0LL;
    }
    if ( v25 )
    {
      v20 = PsGetCurrentProcess(v13, a2, a3, a4);
      if ( (int)MmUnmapViewOfSection(v20, v25) < 0 )
        v7 = 1;
    }
    if ( Src )
    {
      v21 = PsGetCurrentProcess(v13, a2, a3, a4);
      if ( (int)MmUnmapViewOfSection(v21, Src) < 0 )
        v8 = 1;
      v27 = v8;
    }
    if ( !v19 || v7 == 1 || v8 == 1 )
    {
      v9 = v5 == 0;
      break;
    }
    v5 -= v19;
    v30 = v5;
    v4 = a3;
  }
  LOBYTE(v6) = v9;
  return v6;
}
