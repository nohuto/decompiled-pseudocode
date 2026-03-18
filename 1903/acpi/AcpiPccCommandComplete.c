/*
 * XREFs of AcpiPccCommandComplete @ 0x1C0059768
 * Callers:
 *     ACPIPccProcessSci @ 0x1C005945C (ACPIPccProcessSci.c)
 *     AcpiPccWatchdog @ 0x1C0059F60 (AcpiPccWatchdog.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiPccCommandComplete(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  KIRQL v3; // al
  __int16 *v4; // rcx
  KIRQL v5; // bp
  int v6; // ecx
  __int64 v7; // rbx
  int v8; // edx
  void *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // eax

  if ( _InterlockedExchange((volatile __int32 *)(a1 + 312), 0) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 520));
    v4 = *(__int16 **)(a1 + 40);
    v5 = v3;
    *(LARGE_INTEGER *)(a1 + 168) = PerformanceCounter;
    if ( *v4 < 0 )
      _InterlockedDecrement(&AcpiPccSciReferenceCount);
    KeCancelTimer((PKTIMER)(a1 + 320));
    if ( (**(_WORD **)(a1 + 48) & 1) != 0 )
    {
      v6 = 0;
      if ( (**(_WORD **)(a1 + 48) & 4) != 0 )
        v6 = -1073741435;
    }
    else
    {
      v6 = -1073741643;
    }
    _InterlockedAnd16(*(volatile signed __int16 **)(a1 + 48), 0xFFF8u);
    v7 = 0LL;
    v8 = *(_DWORD *)a1 & 0x3C;
    if ( v8 == 24 )
    {
      v9 = (void *)v6;
    }
    else
    {
      if ( v8 != 40 )
      {
        v10 = (_QWORD *)(a1 + 112);
        v11 = *(_QWORD **)(a1 + 112);
        if ( v11 == (_QWORD *)(a1 + 112) )
        {
          v13 = *(_DWORD *)a1 & 0xFFFFFFC3 | 0xC;
        }
        else
        {
          v7 = *(_QWORD *)(a1 + 112);
          if ( (_QWORD *)v11[1] != v10 || (v12 = *v11, *(_QWORD **)(*v11 + 8LL) != v11) )
            __fastfail(3u);
          *v10 = v12;
          *(_QWORD *)(v12 + 8) = v10;
          v13 = *(_DWORD *)a1 & 0xFFFFFFC3 | 0x14;
        }
        *(_DWORD *)a1 = v13;
        goto LABEL_20;
      }
      v9 = 0LL;
    }
    KeInsertQueueDpc((PRKDPC)(a1 + 448), v9, 0LL);
LABEL_20:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 520), v5);
    if ( v7 )
    {
      *(_DWORD *)(v7 + 40) = 0;
      KeSetEvent((PRKEVENT)(v7 + 16), 0, 0);
    }
  }
}
