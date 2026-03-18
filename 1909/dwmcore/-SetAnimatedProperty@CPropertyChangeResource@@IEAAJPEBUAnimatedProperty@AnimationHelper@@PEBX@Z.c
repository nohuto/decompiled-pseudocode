/*
 * XREFs of ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A4430
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x1800A43DC (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A4500 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     memcmp_0 @ 0x1800F01FF (memcmp_0.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyChangeResource::SetAnimatedProperty(
        CPropertyChangeResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  char *v4; // rbp
  unsigned int v7; // ebx
  struct _RTL_GENERIC_TABLE *v9; // rcx
  __int64 v10; // rbx
  PVOID Element; // rax
  _QWORD *v12; // rdx
  signed int v13; // eax
  __int64 v14; // rcx
  __int64 i; // r8
  __int64 v16; // rcx

  v4 = (char *)this + *((_QWORD *)a2 + 1);
  v7 = 0;
  if ( memcmp_0(v4, a3, *((_QWORD *)a2 + 2)) )
  {
    memcpy_0(v4, a3, *((_QWORD *)a2 + 2));
    v9 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
    v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
    Element = 0LL;
    if ( v9 )
      Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v9, *(_DWORD *)a2);
    v12 = (_QWORD *)(((unsigned __int64)Element + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)Element >> 64));
    if ( v12 )
    {
      for ( i = 0LL;
            (unsigned int)i < *(_DWORD *)((((unsigned __int64)Element + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)Element >> 64))
                                        + 0x18);
            *(_QWORD *)(v16 + 272) = v10 )
      {
        v16 = *(_QWORD *)(*v12 + 8 * i);
        i = (unsigned int)(i + 1);
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 416LL) |= 2u;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
        0LL,
        8LL);
    }
    (*(void (__fastcall **)(CPropertyChangeResource *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
    v13 = CPropertyChangeResource::NotifyPropertyChanged(this, a2, a3);
    v7 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x66u, 0LL);
  }
  return v7;
}
