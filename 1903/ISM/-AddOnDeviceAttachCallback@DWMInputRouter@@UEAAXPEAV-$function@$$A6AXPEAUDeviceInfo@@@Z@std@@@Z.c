/*
 * XREFs of ?AddOnDeviceAttachCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x1800C2D20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x1800ADF40 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 */

__int64 __fastcall DWMInputRouter::AddOnDeviceAttachCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  _BYTE *v4; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = a1 + 712;
  result = a2;
  v4 = *(_BYTE **)(v2 + 8);
  if ( *(_BYTE **)(v2 + 16) == v4 )
    return std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>((void **)v2, v4, &v5);
  *(_QWORD *)v4 = result;
  *(_QWORD *)(v2 + 8) += 8LL;
  return result;
}
