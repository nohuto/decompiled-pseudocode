/*
 * XREFs of ACPIGpeBuildWakeMasks @ 0x1C001AB70
 * Callers:
 *     ACPIGpeBuildWakeMasks @ 0x1C001AB70 (ACPIGpeBuildWakeMasks.c)
 *     ACPITableLoadCallBack @ 0x1C002F450 (ACPITableLoadCallBack.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017BC4 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0019D20 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001AB70 (ACPIGpeBuildWakeMasks.c)
 *     ACPIExtListEnumNext @ 0x1C001ACB0 (ACPIExtListEnumNext.c)
 */

void __fastcall ACPIGpeBuildWakeMasks(__int64 a1)
{
  __int64 v1; // r10
  KSPIN_LOCK *v2; // r9
  __int64 *v3; // rdx
  int v4; // r8d
  __int64 *v5; // rbx
  bool v6; // zf
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r9d
  PKSPIN_LOCK v13; // r9
  _QWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  KSPIN_LOCK *v15; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql; // [rsp+38h] [rbp-28h]
  __int64 *v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h]
  int v19; // [rsp+50h] [rbp-10h]

  v1 = a1 + 752;
  v2 = 0LL;
  v3 = *(__int64 **)(a1 + 752);
  v4 = 0;
  v5 = 0LL;
  v14[0] = a1 + 752;
  v6 = v3 == (__int64 *)(a1 + 752);
  v15 = 0LL;
  v7 = 768LL;
  v19 = 0;
  v8 = *v3;
  v9 = (__int64)(v3 - 96);
  v17 = v3 - 96;
  if ( !v6 )
    v5 = v3 - 96;
  v14[1] = v8;
  v18 = 768LL;
  while ( v9 + v7 != v1 )
  {
    if ( v4 == 1 )
    {
      ACPIInitReferenceDeviceExtension(v9);
      KeReleaseSpinLock(v13, NewIrql);
    }
    ACPIGpeBuildWakeMasks(v5);
    if ( (v5[1] & 0x10000) != 0 && (v5[119] & 0x500000000LL) == 0 )
    {
      v11 = (unsigned int)ACPIGpeIndexToGpeRegister(*((unsigned int *)v5 + 114));
      v12 = 1 << (v5[57] & 7);
      if ( ((unsigned __int8)v12 & *((_BYTE *)GpeEnable + v11)) != 0 )
      {
        if ( (v5[1] & 0x800000000LL) != 0 )
        {
          *((_BYTE *)GpeSpecialHandler + v11) |= v12;
          *((_BYTE *)GpeWakeHandler + v11) &= ~(_BYTE)v12;
        }
        else if ( ((unsigned __int8)v12 & *((_BYTE *)GpeSpecialHandler + v11)) == 0 )
        {
          *((_BYTE *)GpeWakeHandler + v11) |= v12;
        }
      }
    }
    v10 = ACPIExtListEnumNext(v14);
    v4 = v19;
    v5 = (__int64 *)v10;
    v7 = v18;
    v9 = (__int64)v17;
    v2 = v15;
    v1 = v14[0];
  }
  if ( v4 )
    KeReleaseSpinLock(v2, NewIrql);
}
