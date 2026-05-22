/*
 * XREFs of ?UnregisterHotKey@HotKeyProcessor@@UEAAJII@Z @ 0x1801470B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@UHOTKEY@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180147674 (-erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@UHOTKEY@@@std@@U-$less@K@2@V-$allocat_ea_180147674.c)
 */

__int64 __fastcall HotKeyProcessor::UnregisterHotKey(HotKeyProcessor *this, int a2, int a3)
{
  unsigned int v3; // ebx
  int v5[4]; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  const char *v7; // [rsp+68h] [rbp+17h]
  int v8; // [rsp+70h] [rbp+1Fh]
  int v9; // [rsp+74h] [rbp+23h]
  int *v10; // [rsp+78h] [rbp+27h]
  int v11; // [rsp+80h] [rbp+2Fh]
  int v12; // [rsp+84h] [rbp+33h]
  int *v13; // [rsp+88h] [rbp+37h]
  int v14; // [rsp+90h] [rbp+3Fh]
  int v15; // [rsp+94h] [rbp+43h]
  int v16; // [rsp+C0h] [rbp+6Fh] BYREF
  int v17; // [rsp+C8h] [rbp+77h] BYREF

  v17 = a3;
  v16 = a2;
  v3 = 0;
  v5[0] = (unsigned __int16)a2 | ((unsigned __int16)a3 << 16);
  if ( std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<HOTKEY>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<HOTKEY>>>,0>>::erase(
         (char *)this + 24,
         v5) )
  {
    if ( (unsigned int)dword_1801DE450 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x20000uLL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = (const char *)&v16;
      v8 = 4;
      v11 = 4;
      v10 = &v17;
      TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A1E33, 0LL, 0LL, 4u, &pData);
    }
  }
  else
  {
    v3 = 1419;
    if ( (unsigned int)dword_1801DE450 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x20000uLL) )
    {
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v7 = "UnregisterHotKey failed because the HotKey was not registered.";
      v10 = &v16;
      v11 = 4;
      v14 = 4;
      v8 = 63;
      v13 = &v17;
      TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A1A16, 0LL, 0LL, 5u, &pData);
    }
  }
  return v3;
}
