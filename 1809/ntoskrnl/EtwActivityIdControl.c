/*
 * XREFs of EtwActivityIdControl @ 0x1400A3A90
 * Callers:
 *     IoReuseIrp @ 0x1400DF810 (IoReuseIrp.c)
 *     IoSetActivityIdIrp @ 0x1400DF9E0 (IoSetActivityIdIrp.c)
 *     IopInitActivityIdIrp @ 0x14027F1D4 (IopInitActivityIdIrp.c)
 *     VrpIoctlDeviceDispatch @ 0x140808EC0 (VrpIoctlDeviceDispatch.c)
 *     VrpRegistryCallback @ 0x1408091F0 (VrpRegistryCallback.c)
 *     VrpPostEnumerateKey @ 0x14080B800 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x14080C044 (VrpPostOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x14080C440 (VrpPostQueryKey.c)
 *     VrpPostUnloadKey @ 0x14080C7F0 (VrpPostUnloadKey.c)
 *     VrpPreFlushKey @ 0x14080C890 (VrpPreFlushKey.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14080D4E0 (VrpPreOpenOrCreate.c)
 *     VrpPreQueryKeyName @ 0x14080D9A0 (VrpPreQueryKeyName.c)
 *     IoCaptureLiveDump @ 0x140820184 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140820768 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall EtwActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  volatile signed __int64 *EtwSupport; // rax
  struct _KTHREAD *CurrentThread; // rdx
  GUID *Teb; // r9
  unsigned __int64 v7; // rax
  GUID *v8; // r9
  __int16 v9; // dx
  ULONG v10; // ecx
  ULONG v11; // ecx
  volatile signed __int64 *v12; // rax
  GUID v13; // xmm1
  NTSTATUS v14; // [rsp+0h] [rbp-18h]
  GUID *v15; // [rsp+8h] [rbp-10h]

  v14 = 0;
  if ( ControlCode == 3 )
  {
    EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
    *(_QWORD *)ActivityId->Data4 = _InterlockedIncrement64(EtwSupport + 1);
    *(_QWORD *)&ActivityId->Data1 = *EtwSupport;
    return v14;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 && CurrentThread->ApcStateIndex != 1 )
  {
    Teb = (GUID *)CurrentThread->Teb;
    if ( Teb )
    {
      v15 = Teb + 369;
      v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v7 && ((v9 = *(_WORD *)(v7 + 8), v9 == 332) || v9 == 452) )
      {
        v8 = Teb + 757;
        v15 = v8;
      }
      else
      {
        v8 = Teb + 369;
      }
      if ( ControlCode == 1 )
      {
        *ActivityId = *v8;
      }
      else
      {
        v10 = ControlCode - 2;
        if ( v10 )
        {
          v11 = v10 - 2;
          if ( v11 )
          {
            if ( v11 == 1 )
            {
              *ActivityId = *v8;
              v12 = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
              *(_QWORD *)v15->Data4 = _InterlockedIncrement64(v12 + 1);
              *(_QWORD *)&v15->Data1 = *v12;
            }
            else
            {
              return -1073741811;
            }
          }
          else
          {
            v13 = *v8;
            *v8 = *ActivityId;
            *ActivityId = v13;
          }
        }
        else
        {
          *v8 = *ActivityId;
        }
      }
      return v14;
    }
  }
  return -1073741637;
}
