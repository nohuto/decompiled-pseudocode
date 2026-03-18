/*
 * XREFs of EtwActivityIdControl @ 0x14010A760
 * Callers:
 *     IoReuseIrp @ 0x140091F90 (IoReuseIrp.c)
 *     IoSetActivityIdIrp @ 0x140092150 (IoSetActivityIdIrp.c)
 *     IopInitActivityIdIrp @ 0x140293718 (IopInitActivityIdIrp.c)
 *     VrpIoctlDeviceDispatch @ 0x140840BD0 (VrpIoctlDeviceDispatch.c)
 *     VrpRegistryCallback @ 0x140840F00 (VrpRegistryCallback.c)
 *     VrpPostEnumerateKey @ 0x140843678 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x140843E6C (VrpPostOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x140844254 (VrpPostQueryKey.c)
 *     VrpPostUnloadKey @ 0x140844604 (VrpPostUnloadKey.c)
 *     VrpPreFlushKey @ 0x1408446A4 (VrpPreFlushKey.c)
 *     VrpPreLoadKey @ 0x140844778 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x1408452F8 (VrpPreOpenOrCreate.c)
 *     VrpPreQueryKeyName @ 0x140845748 (VrpPreQueryKeyName.c)
 *     IoCaptureLiveDump @ 0x140858644 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140858C90 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall EtwActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  volatile signed __int64 *EtwSupport; // rax
  struct _KTHREAD *CurrentThread; // r8
  GUID *Teb; // r9
  unsigned __int64 v6; // r8
  GUID *v7; // r9
  __int16 v8; // ax
  ULONG v9; // ecx
  ULONG v10; // ecx
  volatile signed __int64 *v11; // rax
  GUID v12; // xmm1
  NTSTATUS v13; // [rsp+0h] [rbp-28h]
  GUID *v14; // [rsp+8h] [rbp-20h]

  v13 = 0;
  if ( ControlCode == 3 )
  {
    EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
    *(_QWORD *)ActivityId->Data4 = _InterlockedIncrement64(EtwSupport + 1);
    *(_QWORD *)&ActivityId->Data1 = *EtwSupport;
    return v13;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 && CurrentThread->ApcStateIndex != 1 )
  {
    Teb = (GUID *)CurrentThread->Teb;
    if ( Teb )
    {
      v14 = Teb + 369;
      v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
      if ( v6 && ((v8 = *(_WORD *)(v6 + 8), v8 == 332) || v8 == 452) )
      {
        v7 = Teb + 757;
        v14 = v7;
      }
      else
      {
        v7 = Teb + 369;
      }
      if ( ControlCode == 1 )
      {
        *ActivityId = *v7;
      }
      else
      {
        v9 = ControlCode - 2;
        if ( v9 )
        {
          v10 = v9 - 2;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              *ActivityId = *v7;
              v11 = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
              *(_QWORD *)v14->Data4 = _InterlockedIncrement64(v11 + 1);
              *(_QWORD *)&v14->Data1 = *v11;
            }
            else
            {
              return -1073741811;
            }
          }
          else
          {
            v12 = *v7;
            *v7 = *ActivityId;
            *ActivityId = v12;
          }
        }
        else
        {
          *v7 = *ActivityId;
        }
      }
      return v13;
    }
  }
  return -1073741637;
}
