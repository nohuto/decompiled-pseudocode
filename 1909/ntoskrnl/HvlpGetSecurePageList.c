/*
 * XREFs of HvlpGetSecurePageList @ 0x14028E4E0
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x14028A948 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x14028AAE4 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x14028B62C (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x14028BDC8 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140124C70 (MmGetPhysicalAddress.c)
 *     VslGetSecurePageList @ 0x14028F5E0 (VslGetSecurePageList.c)
 */

__int64 __fastcall HvlpGetSecurePageList(int a1, int a2, void *a3, __int64 *a4, int a5, _BYTE *a6)
{
  __int64 *v10; // rsi
  PHYSICAL_ADDRESS *v11; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v13; // ecx
  int SecurePageList; // ecx

  if ( a1 )
  {
    v10 = &qword_140462D48;
    v11 = (PHYSICAL_ADDRESS *)&unk_140462D50;
  }
  else
  {
    v10 = &qword_140462D28;
    v11 = (PHYSICAL_ADDRESS *)&unk_140462D30;
  }
  if ( a3 )
    PhysicalAddress = MmGetPhysicalAddress(a3);
  else
    PhysicalAddress = *v11;
  if ( a4 )
    *a4 = 0LL;
  v13 = 4096;
  *a6 = 0;
  LOBYTE(v13) = a1 == 0;
  SecurePageList = VslGetSecurePageList(v13, PhysicalAddress.QuadPart / 4096, a2, a5, (__int64)a6);
  if ( SecurePageList >= 0 && a4 )
  {
    if ( a3 )
      *a4 = (__int64)a3;
    else
      *a4 = *v10;
  }
  return (unsigned int)SecurePageList;
}
