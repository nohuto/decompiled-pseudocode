/*
 * XREFs of RIMIDE_InjectGenericHidInput @ 0x1C0120DB4
 * Callers:
 *     NtUserInjectGenericHidInput @ 0x1C00F05A0 (NtUserInjectGenericHidInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C011CD70 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 */

_BOOL8 __fastcall RIMIDE_InjectGenericHidInput(char *a1, __int64 a2, char *a3, unsigned int a4)
{
  size_t v4; // rbx
  int v6; // r14d
  char *v7; // rdi
  char *v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  PVOID Object[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a4;
  Object[0] = 0LL;
  v6 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, Object);
  if ( v6 >= 0 )
  {
    v7 = (char *)Object[0];
    if ( Object[0] )
      v8 = (char *)Object[0] + 88;
    else
      v8 = 0LL;
    InputTraceLogging::RIM::InjectInput((__int64)v8, 1u);
    v9 = *((_QWORD *)v7 + 53);
    Object[1] = (PVOID)v9;
    if ( (*((_DWORD *)v7 + 68) & 0x2000) != 0 && *(unsigned __int16 *)(*((_QWORD *)v7 + 69) + 44LL) == (_DWORD)v4 )
    {
      v10 = *((_QWORD *)v7 + 59);
      if ( !*(_DWORD *)(v10 + 16) )
        *(_DWORD *)(v10 + 16) = 1;
      RIMLockExclusive(v9 + 104);
      if ( !*(_BYTE *)(v9 + 81) )
      {
        if ( (_DWORD)v4 )
        {
          if ( ((PsGetCurrentProcessWow64Process(v11) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a3[v4] > MmUserProbeAddress || &a3[v4] < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(*(void **)(*((_QWORD *)v7 + 69) + 24LL), a3, v4);
        RIMLockExclusive(v9 + 568);
        *((_DWORD *)v7 + 86) = 0;
        *((_QWORD *)v7 + 44) = *(unsigned __int16 *)(*((_QWORD *)v7 + 69) + 44LL);
        rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v9, (struct RIMDEV *)(v7 + 88));
        *(_QWORD *)(v9 + 576) = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 568, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v9 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 104, 0LL);
      KeLeaveCriticalRegion();
    }
    ObfDereferenceObject(v7);
  }
  return v6 >= 0;
}
