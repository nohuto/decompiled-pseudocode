/*
 * XREFs of AlpcpFormatConnectionRequest @ 0x1406470B4
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1406454D8 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x1406CC980 (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpCaptureAttributes @ 0x1405E3090 (AlpcpCaptureAttributes.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     AlpcpValidateConnectionMessage @ 0x1406472BC (AlpcpValidateConnectionMessage.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140648944 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpAllocateMessage @ 0x14064A798 (AlpcpAllocateMessage.c)
 *     AlpcpReferenceBlob @ 0x14064B920 (AlpcpReferenceBlob.c)
 *     AlpcpMapLegacyPortView @ 0x14068CDB8 (AlpcpMapLegacyPortView.c)
 */

__int64 __fastcall AlpcpFormatConnectionRequest(
        ULONG_PTR *a1,
        int a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int16 *a5,
        _DWORD *a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        char a10)
{
  char v10; // si
  int v11; // r12d
  unsigned __int16 *v12; // r14
  void *v13; // r15
  ULONG_PTR *v15; // rbp
  __int64 result; // rax
  int v17; // ebx
  ULONG_PTR v18; // rdi
  _WORD *v19; // rcx
  __int16 v20; // ax
  __int16 v21; // dx
  int v22; // r9d
  _QWORD *v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rax
  ULONG_PTR v26; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+18h] BYREF

  v10 = a9;
  v11 = a4;
  v12 = a5;
  v13 = a3;
  v15 = a1;
  if ( !a4
    || (v23 = (_QWORD *)a3[2], LOBYTE(a3) = a9, result = AlpcpValidateConnectionMessage(*v23, a5, a3), (int)result >= 0) )
  {
    result = AlpcpAllocateMessage(&BugCheckParameter2, 0LL, 0LL);
    v17 = result;
    if ( (int)result >= 0 )
    {
      v18 = BugCheckParameter2;
      if ( v10 )
      {
        v24 = a7;
        if ( a7 )
        {
          v17 = AlpcpMapLegacyPortView(v13);
          v25 = *(_QWORD *)(v24 + 24);
          v15 = a1;
          *(_QWORD *)(v18 + 272) = v25;
        }
        else
        {
          v15 = a1;
          *(_QWORD *)(BugCheckParameter2 + 272) = 0LL;
        }
      }
      else
      {
        v17 = AlpcpCaptureAttributes((__int64)v13, a2, a6, BugCheckParameter2, (void *)(BugCheckParameter2 + 104));
      }
      if ( v17 < 0 )
        goto LABEL_22;
      v19 = (_WORD *)BugCheckParameter2;
      *(_OWORD *)(BugCheckParameter2 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
      v20 = *v12;
      v19[120] = *v12;
      v19[121] = v20 + 40;
      v21 = v19[122] & 0xFF00 | 0xA;
      v19[122] = v21;
      if ( !KeGetCurrentThread()->PreviousMode )
        v19[122] = v21 | v12[2] & 0x8000;
      v22 = *v12;
      v18 = BugCheckParameter2;
      if ( (_WORD)v22
        && (v17 = AlpcpSetupMessageDataForDeferredCopy(BugCheckParameter2, v11, a2, v22, v10, a10), v17 < 0) )
      {
LABEL_22:
        AlpcpUnlockMessage(v18);
      }
      else
      {
        if ( v10 )
        {
          v26 = *(_QWORD *)(v18 + 144);
          if ( v26 )
          {
            *a8 = v26;
            AlpcpReferenceBlob(v26);
          }
        }
        *v15 = v18;
      }
      return (unsigned int)v17;
    }
  }
  return result;
}
