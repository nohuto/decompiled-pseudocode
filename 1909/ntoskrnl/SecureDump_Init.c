/*
 * XREFs of SecureDump_Init @ 0x1401897F0
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x1409F467C (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     BCryptCloseAlgorithmProvider @ 0x140189C68 (BCryptCloseAlgorithmProvider.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14029B4F8 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14029BAA4 (SecureDump_SymmetricEncryptionSetup.c)
 *     BCryptDestroyKey @ 0x14031C088 (BCryptDestroyKey.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_Init(__int64 a1, ULONG a2)
{
  int v2; // ebx

  v2 = 0;
  if ( SecureDmpEncryptionContext == 1 )
  {
    if ( !dword_14046415C )
    {
      byte_140464154 = 0;
LABEL_4:
      SecureDmpEncryptionContext = 2;
      goto LABEL_5;
    }
    byte_140464154 = 1;
    v2 = SecureDump_SymmetricEncryptionSetup();
    if ( v2 >= 0 )
    {
      v2 = SecureDump_EncryptSymmetricKeyWithPublicKey();
      if ( v2 >= 0 )
      {
        a2 = (dword_14046416C + pcbResult + 8279) & 0xFFFFF000;
        dword_1404641A0 = a2;
        goto LABEL_4;
      }
    }
  }
LABEL_5:
  switch ( SecureDmpEncryptionContext )
  {
    case 3:
      v2 = -1073741823;
      break;
    case 2:
      return 0LL;
    case 0:
      return 3221225488LL;
    default:
      if ( v2 < 0 )
      {
        byte_140464154 = 0;
        if ( hAlgorithm )
        {
          BCryptCloseAlgorithmProvider(hAlgorithm, a2);
          hAlgorithm = 0LL;
        }
        if ( hObject )
        {
          BCryptDestroyKey(hObject);
          hObject = 0LL;
        }
        if ( qword_140464178 )
        {
          ExFreePoolWithTag(qword_140464178, 0);
          qword_140464178 = 0LL;
        }
        if ( qword_140464170 )
        {
          ExFreePoolWithTag(qword_140464170, 0);
          qword_140464170 = 0LL;
        }
        if ( pbInput )
        {
          ExFreePoolWithTag(pbInput, 0);
          pbInput = 0LL;
        }
        SecureDmpEncryptionContext = 3;
      }
      break;
  }
  return (unsigned int)v2;
}
