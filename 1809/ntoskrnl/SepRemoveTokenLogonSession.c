/*
 * XREFs of SepRemoveTokenLogonSession @ 0x1408A3D60
 * Callers:
 *     SepLinkLogonSessions @ 0x140176F18 (SepLinkLogonSessions.c)
 *     NtSetInformationToken @ 0x1405BEAA0 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x1405DFE70 (SepTokenDeleteMethod.c)
 *     SepSetServerSiloToken @ 0x14089D240 (SepSetServerSiloToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall SepRemoveTokenLogonSession(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edx
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rsi
  __int64 *v6; // rdx
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 **v9; // rdx

  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = *(_DWORD *)(a1 + 24) & 0xF;
    --CurrentThread->KernelApcDisable;
    v4 = v3;
    v5 = &SepRmDbLock + (v3 & 3);
    ExAcquireResourceExclusiveLite(v5, 1u);
    v6 = *(__int64 **)(SepLogonSessions + 8 * v4);
    if ( v6 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a1 + 24) == *((_DWORD *)v6 + 2)
          && *(_DWORD *)(a1 + 28) == *((_DWORD *)v6 + 3)
          && *(_QWORD *)(*(_QWORD *)(a1 + 216) + 160LL) == v6[20] )
        {
          v7 = (__int64 *)v6[22];
          if ( v7 != v6 + 22 )
            break;
        }
LABEL_9:
        v6 = (__int64 *)*v6;
        if ( !v6 )
          goto LABEL_10;
      }
      while ( 1 )
      {
        v8 = (__int64 *)*v7;
        if ( v7[2] == a1 )
          break;
        v7 = (__int64 *)*v7;
        if ( v8 == v6 + 22 )
          goto LABEL_9;
      }
      if ( (__int64 *)v8[1] != v7 || (v9 = (__int64 **)v7[1], *v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = (__int64)v9;
      ExReleaseResourceLite(v5);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
LABEL_10:
      ExReleaseResourceLite(v5);
      KeLeaveCriticalRegion();
    }
  }
}
