/*
 * XREFs of RegisterHvPackage @ 0x1C002F670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     GetHvPackage @ 0x1C002E79C (GetHvPackage.c)
 */

__int64 __fastcall RegisterHvPackage(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r8
  _DWORD *HvPackage; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = HvlQueryProcessorTopology(*(unsigned int *)(a1 + 72), 0LL, &v9, 0LL);
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001B398,
      0LL);
    v3 = qword_1C001B3C8;
    if ( (__int64 *)qword_1C001B3C8 == &qword_1C001B3C8 )
      goto LABEL_6;
    do
    {
      HvPackage = (_DWORD *)v3;
      if ( *(_DWORD *)(v3 + 32) == v9 )
        break;
      v3 = *(_QWORD *)v3;
      HvPackage = 0LL;
    }
    while ( (__int64 *)v3 != &qword_1C001B3C8 );
    if ( !HvPackage )
    {
LABEL_6:
      HvPackage = GetHvPackage(v9);
      if ( !HvPackage )
      {
LABEL_11:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C001B398);
        return (unsigned int)v2;
      }
      v5 = (_QWORD *)qword_1C001B3D0;
      if ( *(__int64 **)qword_1C001B3D0 != &qword_1C001B3C8 )
LABEL_13:
        __fastfail(3u);
      *(_QWORD *)HvPackage = &qword_1C001B3C8;
      *((_QWORD *)HvPackage + 1) = v5;
      *v5 = HvPackage;
      qword_1C001B3D0 = (__int64)HvPackage;
    }
    *(_QWORD *)(a1 + 1064) = HvPackage;
    ++HvPackage[10];
    v6 = (_QWORD *)(a1 + 1072);
    v7 = (_QWORD *)*((_QWORD *)HvPackage + 3);
    if ( (_DWORD *)*v7 == HvPackage + 4 )
    {
      *v6 = HvPackage + 4;
      *(_QWORD *)(a1 + 1080) = v7;
      *v7 = v6;
      *((_QWORD *)HvPackage + 3) = v6;
      v2 = HvPackage[9] != HvPackage[10] ? 0x103 : 0;
      goto LABEL_11;
    }
    goto LABEL_13;
  }
  return (unsigned int)v2;
}
