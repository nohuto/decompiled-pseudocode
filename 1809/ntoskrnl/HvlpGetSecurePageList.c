/*
 * XREFs of HvlpGetSecurePageList @ 0x14027A590
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x140276B8C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x140276D28 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x14027780C (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x140277F88 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpGetSecurePageList(int a1, __int64 a2, void *a3, __int64 *a4, _QWORD *a5, _BYTE *a6)
{
  __int64 *v10; // rsi
  PHYSICAL_ADDRESS *v11; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  NTSTATUS v13; // edx
  _BYTE v15[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BOOL8 v16; // [rsp+28h] [rbp-A0h]
  LONGLONG v17; // [rsp+30h] [rbp-98h]
  __int64 v18; // [rsp+38h] [rbp-90h]
  char v19; // [rsp+40h] [rbp-88h]

  if ( a1 )
  {
    v10 = &qword_1404384E8;
    v11 = (PHYSICAL_ADDRESS *)&unk_1404384F0;
  }
  else
  {
    v10 = &qword_1404384C8;
    v11 = (PHYSICAL_ADDRESS *)&unk_1404384D0;
  }
  if ( a3 )
    PhysicalAddress = MmGetPhysicalAddress(a3);
  else
    PhysicalAddress = *v11;
  if ( a4 )
    *a4 = 0LL;
  *a6 = 0;
  v18 = a2;
  v16 = a1 == 0;
  v17 = PhysicalAddress.QuadPart / 4096;
  v13 = VslpEnterIumSecureMode(2u, 2050LL, 0, (__int64)v15);
  if ( v13 >= 0 )
  {
    if ( a5 )
      *a5 = v18;
    *a6 = v19;
    if ( a4 )
    {
      if ( a3 )
        *a4 = (__int64)a3;
      else
        *a4 = *v10;
    }
  }
  return (unsigned int)v13;
}
