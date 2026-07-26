/*
 * XREFs of ndisOidPostIovDeleteNicSwitch @ 0x1C0070BF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0016F10 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisIovDeleteNicSwitch @ 0x1C006F9A4 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006FA5C (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 */

void __fastcall ndisOidPostIovDeleteNicSwitch(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    WPP_SF_qq(0x12u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v1);
    v4 = *(_QWORD *)a1;
  }
  if ( v4
    && ndisIovNicSwitchWithoutIovSupported(v3)
    && (_UNKNOWN *)ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32)) != &ndisIntReqGeneric
    && !*(_DWORD *)(a1 + 40) )
  {
    v5 = *(_QWORD *)(v1 + 40);
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(v3, *(unsigned int *)(v5 + 8));
    ndisIovDeleteNicSwitch(v3, *(unsigned int *)(v5 + 8));
  }
}
