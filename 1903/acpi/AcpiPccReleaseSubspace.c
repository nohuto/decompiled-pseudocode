/*
 * XREFs of AcpiPccReleaseSubspace @ 0x1C0059CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiPccReleaseSubspace(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  unsigned int v3; // esi
  __int64 v4; // rbx
  KIRQL v5; // r8
  _QWORD *v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edx

  v1 = (KSPIN_LOCK *)(a1 + 520);
  v3 = -1073741823;
  v4 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 520));
  if ( (*(_BYTE *)a1 & 0x3C) == 0x14 )
  {
    v6 = (_QWORD *)(a1 + 112);
    v7 = *(__int64 **)(a1 + 112);
    if ( v7 == (__int64 *)(a1 + 112) )
    {
      v9 = *(_DWORD *)a1 & 0xFFFFFFC3 | 0xC;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 112);
      if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD *)(v8 + 8) != v4) )
        __fastfail(3u);
      *v6 = v8;
      *(_QWORD *)(v8 + 8) = v6;
      v9 = *(_DWORD *)a1 & 0xFFFFFFC3 | 0x14;
    }
    *(_DWORD *)a1 = v9;
    v3 = 0;
  }
  KeReleaseSpinLock(v1, v5);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 40) = 0;
    KeSetEvent((PRKEVENT)(v4 + 16), 0, 0);
  }
  return v3;
}
