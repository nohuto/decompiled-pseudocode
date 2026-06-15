/*
 * XREFs of ?SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z @ 0x140041D48
 * Callers:
 *     ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x1400531E0 (-SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14005DE50 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     ?AeSendDuplicateHandle@HandleSendReceiveClient@@AEAAJPEAXPEAU_AE_API_MSG@@K0@Z @ 0x1400414C8 (-AeSendDuplicateHandle@HandleSendReceiveClient@@AEAAJPEAXPEAU_AE_API_MSG@@K0@Z.c)
 */

__int64 __fastcall HandleSendReceiveClient::SendHandle(__int64 a1, __int64 a2, void *a3)
{
  unsigned int v5; // ebx
  void *v6; // rdx
  HandleSendReceiveClient *v7; // rcx
  __int64 v8; // r9
  NTSTATUS v9; // eax
  signed int LastError; // eax
  _DWORD v12[11]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+5Ch] [rbp-Ch]

  if ( (((unsigned __int64)a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    memset_0(v12, 0, 0x30uLL);
    v6 = *(void **)(a1 + 8);
    v12[10] = 1;
    v12[0] = 3145736;
    v9 = HandleSendReceiveClient::AeSendDuplicateHandle(v7, v6, (struct _AE_API_MSG *)v12, v8, a3);
    v5 = 0;
    if ( v9 < 0 || (v9 = v13, v13 < 0) )
    {
      RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v9);
      LastError = GetLastError();
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
      else
        return (unsigned int)LastError;
    }
  }
  else
  {
    return (unsigned int)-2147024890;
  }
  return v5;
}
