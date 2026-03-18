/*
 * XREFs of XilRegister_WriteUlong64 @ 0x1C001D494
 * Callers:
 *     XilCoreCommand_AbortCommandRing @ 0x1C00419CC (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_FreeResources @ 0x1C0041B8C (XilCoreCommand_FreeResources.c)
 *     XilCoreCommand_Initialize @ 0x1C0041BD8 (XilCoreCommand_Initialize.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0042C28 (XilCoreDeviceSlot_FreeResources.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C0042D08 (XilCoreDeviceSlot_Initialize.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x1C00606CC (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilRegister_WriteUlong64(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v3 + 473) )
    return Register_WriteSecureMmio(a1, a2, 3LL, &v6);
  result = *(_QWORD *)(v3 + 272);
  if ( (result & 1) != 0 )
  {
    *a2 = a3;
    _InterlockedOr(v5, 0);
    result = HIDWORD(v6);
    a2[1] = HIDWORD(v6);
  }
  else
  {
    *(_QWORD *)a2 = a3;
  }
  _InterlockedOr(v5, 0);
  return result;
}
