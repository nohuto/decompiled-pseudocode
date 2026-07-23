/*
 * XREFs of AlpcpFormatConnectionRequest @ 0x140615A64
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1406146BC (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x1406A6DC0 (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpValidateConnectionMessage @ 0x1406164F8 (AlpcpValidateConnectionMessage.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpAllocateMessage @ 0x140617D6C (AlpcpAllocateMessage.c)
 *     AlpcpReferenceBlob @ 0x140619428 (AlpcpReferenceBlob.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14061B884 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpMapLegacyPortView @ 0x14061DCE4 (AlpcpMapLegacyPortView.c)
 *     AlpcpCaptureAttributes @ 0x140637400 (AlpcpCaptureAttributes.c)
 */

__int64 __fastcall AlpcpFormatConnectionRequest(
        ULONG_PTR *a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int16 *a5,
        __int64 a6,
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
  ULONG_PTR v28; // [rsp+80h] [rbp+18h] BYREF

  v10 = a9;
  v11 = a4;
  v12 = a5;
  v13 = a3;
  v15 = a1;
  if ( !a4
    || (v23 = (_QWORD *)a3[2], LOBYTE(a3) = a9, result = AlpcpValidateConnectionMessage(*v23, a5, a3), (int)result >= 0) )
  {
    result = AlpcpAllocateMessage(&v28, 0LL, 0LL);
    v17 = result;
    if ( (int)result >= 0 )
    {
      v18 = v28;
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
          *(_QWORD *)(v28 + 272) = 0LL;
        }
      }
      else
      {
        v17 = AlpcpCaptureAttributes(v13, a2, a6, v28, v28 + 104);
      }
      if ( v17 < 0 )
        goto LABEL_22;
      v19 = (_WORD *)v28;
      *(_OWORD *)(v28 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
      v20 = *v12;
      v19[120] = *v12;
      v19[121] = v20 + 40;
      v21 = v19[122] & 0xFF00 | 0xA;
      v19[122] = v21;
      if ( !KeGetCurrentThread()->PreviousMode )
        v19[122] = v21 | v12[2] & 0x8000;
      v22 = *v12;
      v18 = v28;
      if ( (_WORD)v22 && (v17 = AlpcpSetupMessageDataForDeferredCopy(v28, v11, a2, v22, v10, a10), v17 < 0) )
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
