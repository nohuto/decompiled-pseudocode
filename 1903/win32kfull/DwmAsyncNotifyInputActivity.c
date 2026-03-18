/*
 * XREFs of DwmAsyncNotifyInputActivity @ 0x1C011E68C
 * Callers:
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifyInputActivity(PVOID Object, int a2, unsigned __int64 a3)
{
  unsigned int v6; // edi
  int v8; // ecx
  _QWORD v9[7]; // [rsp+20h] [rbp-68h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(v9, 0, sizeof(v9));
    LODWORD(v9[0]) = 3670032;
    WORD2(v9[0]) = 0x8000;
    LODWORD(v9[5]) = 1073741911;
    HIDWORD(v9[5]) = a2;
    if ( (unsigned int)(a2 - 256) > 1 )
    {
      if ( (unsigned int)(a2 - 513) > 0xD )
        goto LABEL_4;
      v8 = 8707;
      if ( !_bittest(&v8, a2 - 513) )
        goto LABEL_4;
    }
    else
    {
      if ( a3 > 0x28 || (unsigned int)a3 < 0x21 )
        goto LABEL_4;
      v9[6] = a3;
    }
    v6 = LpcRequestPort(Object, v9);
LABEL_4:
    ObfDereferenceObject(Object);
  }
  return v6;
}
