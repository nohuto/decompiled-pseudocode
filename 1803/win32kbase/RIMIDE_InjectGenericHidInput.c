/*
 * XREFs of RIMIDE_InjectGenericHidInput @ 0x1C00F6174
 * Callers:
 *     NtUserInjectGenericHidInput @ 0x1C00B7FC0 (NtUserInjectGenericHidInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 */

_BOOL8 __fastcall RIMIDE_InjectGenericHidInput(char *a1, __int64 a2, char *a3, unsigned int a4)
{
  size_t v4; // rbx
  int v6; // edi
  _QWORD *v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  PVOID Object[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a4;
  Object[0] = 0LL;
  v6 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, Object);
  if ( v6 >= 0 )
  {
    v7 = Object[0];
    v8 = *((_QWORD *)Object[0] + 52);
    Object[1] = (PVOID)v8;
    if ( (*((_DWORD *)Object[0] + 66) & 0x1000) != 0
      && *(unsigned __int16 *)(*((_QWORD *)Object[0] + 68) + 44LL) == (_DWORD)v4 )
    {
      v9 = *((_QWORD *)Object[0] + 58);
      if ( !*(_DWORD *)(v9 + 16) )
        *(_DWORD *)(v9 + 16) = 1;
      RIMLockExclusive(v8 + 96);
      if ( !*(_BYTE *)(v8 + 73) )
      {
        if ( (_DWORD)v4 )
        {
          if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a3[v4] > MmUserProbeAddress || &a3[v4] < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(*(void **)(v7[68] + 24LL), a3, v4);
        RIMLockExclusive(v8 + 552);
        *((_DWORD *)v7 + 84) = 0;
        v7[43] = *(unsigned __int16 *)(v7[68] + 44LL);
        rimProcessDeviceBufferAndStartRead(v8, v7 + 10);
        *(_QWORD *)(v8 + 560) = 0LL;
        ExReleasePushLockExclusiveEx(v8 + 552, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v8 + 104) = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 96, 0LL);
      KeLeaveCriticalRegion();
    }
    ObfDereferenceObject(v7);
  }
  return v6 >= 0;
}
