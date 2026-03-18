/*
 * XREFs of XilRegister_ReadUshort @ 0x1C001D418
 * Callers:
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C00594E0 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x1C0060404 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall XilRegister_ReadUshort(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 473LL) )
    return *a2;
  Register_ReadSecureMmio(a1, (int)a2, 1, 1, &v3);
  return v3;
}
