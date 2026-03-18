/*
 * XREFs of ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00780DC
 * Callers:
 *     NtGdiCreateColorSpace @ 0x1C012CA80 (NtGdiCreateColorSpace.c)
 *     bInitICM @ 0x1C02654C8 (bInitICM.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C000EF58 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     FreeObject @ 0x1C001A1E0 (FreeObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     AllocateObject @ 0x1C002A780 (AllocateObject.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C004FED4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 */

struct HOBJ__ *__fastcall GreCreateColorSpace(struct _LOGCOLORSPACEEXW *a1)
{
  struct HOBJ__ *v1; // rsi
  struct OBJECT *Object; // rax
  __int64 v4; // rdi
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( *(_DWORD *)a1 == 1347637059 && *((_DWORD *)a1 + 1) == 1024 && *((_DWORD *)a1 + 2) == 588 )
  {
    Object = (struct OBJECT *)AllocateObject(0x268uLL, 9u, 0);
    v4 = (__int64)Object;
    if ( Object )
    {
      v6 = 0LL;
      v1 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v6, Object, 1u, 0, 9u);
      if ( v1 )
      {
        *(_DWORD *)(v4 + 24) = *(_DWORD *)a1;
        *(_DWORD *)(v4 + 28) = *((_DWORD *)a1 + 1);
        *(_DWORD *)(v4 + 32) = *((_DWORD *)a1 + 2);
        *(_DWORD *)(v4 + 36) = *((_DWORD *)a1 + 3);
        *(_DWORD *)(v4 + 40) = *((_DWORD *)a1 + 4);
        *(_OWORD *)(v4 + 44) = *(_OWORD *)((char *)a1 + 20);
        *(_OWORD *)(v4 + 60) = *(_OWORD *)((char *)a1 + 36);
        *(_DWORD *)(v4 + 76) = *((_DWORD *)a1 + 13);
        *(_DWORD *)(v4 + 80) = *((_DWORD *)a1 + 14);
        *(_DWORD *)(v4 + 84) = *((_DWORD *)a1 + 15);
        *(_DWORD *)(v4 + 88) = *((_DWORD *)a1 + 16);
        RtlStringCchCopyW((unsigned __int16 *)(v4 + 92), 0x104uLL, (size_t *)((char *)a1 + 68));
        *(_DWORD *)(v4 + 612) = *((_DWORD *)a1 + 147);
        HmgDecrementShareReferenceCountEx((struct OBJECT *)v4, 0LL);
      }
      else
      {
        FreeObject(v4, 9);
      }
      if ( v6 )
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
    }
    return v1;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
