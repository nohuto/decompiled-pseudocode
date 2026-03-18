/*
 * XREFs of HvlpGetSecurePageList @ 0x14028E780
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x14028ABE8 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x14028AD84 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x14028B8CC (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x14028C068 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140123FF0 (MmGetPhysicalAddress.c)
 *     VslGetSecurePageList @ 0x14028F880 (VslGetSecurePageList.c)
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
    v10 = &qword_140463068;
    v11 = (PHYSICAL_ADDRESS *)&unk_140463070;
  }
  else
  {
    v10 = &qword_140463048;
    v11 = (PHYSICAL_ADDRESS *)&unk_140463050;
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
