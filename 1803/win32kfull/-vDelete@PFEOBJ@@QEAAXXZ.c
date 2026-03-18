/*
 * XREFs of ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C00CC97C
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C0081004 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vDeletePFE@@YAXPEAVPFE@@@Z @ 0x1C02906B0 (-vDeletePFE@@YAXPEAVPFE@@@Z.c)
 * Callees:
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C00CE0A0 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 */

void __fastcall PFEOBJ::vDelete(PFEOBJ *this)
{
  __int64 v1; // r8
  __int64 v3; // rbx
  bool v4; // zf
  void *v5; // rdx
  void *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(**(_QWORD **)this + 88LL);
  v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 44LL) == 2;
  v11 = v3;
  if ( v4 && (v10 = *(_QWORD *)(v1 + 16)) != 0 && (*(_DWORD *)(v10 + 4) & 0x10) != 0 )
  {
    Win32FreePool(v10);
  }
  else
  {
    v5 = *(void **)(v1 + 16);
    if ( v5 )
    {
      if ( !*(_QWORD *)(v3 + 3016) )
        goto LABEL_6;
      PDEVOBJ::Free((PDEVOBJ *)&v11, v5, *(_QWORD *)(v1 + 24));
    }
  }
  if ( *(_QWORD *)(v3 + 3016) )
  {
    PDEVOBJ::Free((PDEVOBJ *)&v11, *(void **)(*(_QWORD *)this + 32LL), *(_QWORD *)(*(_QWORD *)this + 40LL));
    v6 = *(void **)(*(_QWORD *)this + 48LL);
    if ( v6 != &gkpNothing )
      PDEVOBJ::Free((PDEVOBJ *)&v11, v6, *(_QWORD *)(*(_QWORD *)this + 56LL));
  }
LABEL_6:
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 32LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  v7 = *(_QWORD *)this;
  v8 = *(_QWORD *)(*(_QWORD *)this + 72LL);
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
    v7 = *(_QWORD *)this;
  }
  v9 = *(_QWORD *)(v7 + 112);
  if ( v9 )
  {
    Win32FreePool(v9);
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  }
  *(_QWORD *)this = 0LL;
}
