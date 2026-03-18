/*
 * XREFs of PnpTraceIommuDeviceProperties @ 0x1408747A4
 * Callers:
 *     PiIommuAllocateExtension @ 0x140774BB4 (PiIommuAllocateExtension.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void PnpTraceIommuDeviceProperties()
{
  int v0; // r9d
  __int64 v1; // r10
  int v2; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v4; // [rsp+60h] [rbp+17h]
  __int64 v5; // [rsp+68h] [rbp+1Fh]
  __int64 v6; // [rsp+70h] [rbp+27h]
  _DWORD v7[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v8; // [rsp+80h] [rbp+37h]
  __int64 v9; // [rsp+88h] [rbp+3Fh]

  if ( stru_140425D20.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140425D20, 0x400000000000uLL) )
    {
      v2 = v0;
      v4 = v7;
      v6 = *(_QWORD *)(v1 + 48);
      v7[0] = *(unsigned __int16 *)(v1 + 40);
      v8 = &v2;
      v5 = 2LL;
      v7[1] = 0;
      v9 = 4LL;
      TlgWrite(&stru_140425D20, &unk_14038CE45, 0LL, 0LL, 5u, &pData);
    }
  }
}
