/*
 * XREFs of ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x1800215C8
 * Callers:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x1800216A4 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008E688 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001F390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004E28A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSourceArray::CopyAndAddRef(CBitmapSourceArray *this, const struct CBitmapSourceArray *a2)
{
  unsigned int v2; // ebx
  int v5; // ebp
  int v6; // eax
  unsigned int v7; // esi
  bool v8; // zf
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rcx
  void *Src; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 6) )
  {
    v10 = *((unsigned int *)this + 6);
    v11 = 0LL;
    do
    {
      v12 = *(_QWORD *)(v11 + *(_QWORD *)this);
      if ( v12 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1LL);
        *(_QWORD *)(v11 + *(_QWORD *)this) = 0LL;
      }
      v11 += 8LL;
      --v10;
    }
    while ( v10 );
  }
  *((_DWORD *)this + 6) = 0;
  v5 = *((_DWORD *)a2 + 6);
  Src = *(void **)a2;
  v6 = DynArrayImpl<0>::Grow((char **)this, 8u, v5, 0, (unsigned __int64 *)&Src);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x24Au);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)this + (unsigned int)(8 * *((_DWORD *)this + 6))), Src, (unsigned int)(8 * v5));
    v8 = v5 + *((_DWORD *)this + 6) == 0;
    *((_DWORD *)this + 6) += v5;
    if ( !v8 )
    {
      do
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)this + 8LL * v2++) + 8LL));
      while ( v2 < *((_DWORD *)this + 6) );
    }
  }
  return v7;
}
