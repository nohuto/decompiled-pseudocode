/*
 * XREFs of ?OnInput@ContextualProcessing@InputETW@@SAXPEBGPEAUIInputTarget@@J@Z @ 0x1800C28C4
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800C3220 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x18002217C (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall InputETW::ContextualProcessing::OnInput(const unsigned __int16 *a1, struct IInputTarget *a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  struct IInputTarget *v7; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  const unsigned __int16 *v9; // [rsp+68h] [rbp+17h]
  int v10; // [rsp+70h] [rbp+1Fh]
  int v11; // [rsp+74h] [rbp+23h]
  struct IInputTarget **v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+80h] [rbp+2Fh]
  int *v14; // [rsp+88h] [rbp+37h]
  __int64 v15; // [rsp+90h] [rbp+3Fh]
  int v16; // [rsp+C8h] [rbp+77h] BYREF

  v16 = a3;
  v5 = *((_QWORD *)InputETW::Instance() + 1);
  if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
  {
    LODWORD(v6) = 0;
    if ( a1 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( a1[v6] );
    }
    v11 = 0;
    v10 = 2 * v6 + 2;
    v7 = a2;
    v12 = &v7;
    v13 = 8LL;
    if ( !a1 )
      a1 = &sourceString;
    v14 = &v16;
    v9 = a1;
    v15 = 4LL;
    TlgWrite((TraceLoggingHProvider)v5, &unk_18016ADEF, 0LL, 0LL, 5u, &pData);
  }
}
