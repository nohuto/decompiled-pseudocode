/*
 * XREFs of ?bCopySection@@YAHPEAX0_K@Z @ 0x1C026DFC4
 * Callers:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C008D590 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C026DCBC (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
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
  void *v23; // [rsp+58h] [rbp-70h] BYREF
  void *Src; // [rsp+60h] [rbp-68h] BYREF
  size_t v25; // [rsp+68h] [rbp-60h] BYREF
  size_t v26; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v4 = a3;
  v5 = a3;
  v29 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = v5 == 0;
    if ( !v5 )
      break;
    v10 = v5;
    if ( v5 > 0x10000 )
      v10 = 0x10000LL;
    v11 = v4 - v5;
    v27 = v4 - v5;
    v28 = v4 - v5;
    v23 = 0LL;
    Src = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    CurrentProcess = PsGetCurrentProcess(0x10000LL, a2, a3, a4);
    if ( (int)MmMapViewOfSection(a1, CurrentProcess, &v23, 0LL, v10, &v27, &v25, 2, 0x400000, 4) < 0 )
    {
      v23 = 0LL;
      v25 = 0LL;
    }
    if ( v25 )
    {
      v14 = PsGetCurrentProcess(v13, a2, a3, a4);
      if ( (int)MmMapViewOfSection(a2, v14, &Src, 0LL, v10, &v28, &v26, 2, 0x400000, 2) < 0 )
      {
        Src = 0LL;
        v26 = 0LL;
      }
    }
    if ( v25 && v26 )
    {
      v15 = v11 - v27;
      v16 = v11 - v28;
      v23 = (char *)v23 + v15;
      Src = (char *)Src + v16;
      if ( v25 <= v15 )
        v17 = 0LL;
      else
        v17 = v25 - v15;
      v25 = v17;
      if ( v26 <= v16 )
        v18 = 0LL;
      else
        v18 = v26 - v16;
      v26 = v18;
      if ( v17 >= v18 )
        v17 = v18;
      v19 = v5;
      if ( v17 < v5 )
        v19 = v17;
      memmove(v23, Src, v19);
    }
    else
    {
      v19 = 0LL;
    }
    if ( v23 )
    {
      v20 = PsGetCurrentProcess(v13, a2, a3, a4);
      if ( (int)MmUnmapViewOfSection(v20, v23) < 0 )
        v7 = 1;
    }
    if ( Src )
    {
      v21 = PsGetCurrentProcess(v13, a2, a3, a4);
      if ( (int)MmUnmapViewOfSection(v21, Src) < 0 )
        v8 = 1;
    }
    if ( !v19 || v7 == 1 || v8 == 1 )
    {
      v9 = v5 == 0;
      break;
    }
    v5 -= v19;
    v29 = v5;
    v4 = a3;
  }
  LOBYTE(v6) = v9;
  return v6;
}
