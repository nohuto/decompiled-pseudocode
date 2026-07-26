/*
 * XREFs of ?ndisNsiEnumerateAllInvertedIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00648B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisIfFindInterface @ 0x1C002A39C (ndisIfFindInterface.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInvertedIfStackEntries(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // r14
  int *v4; // r11
  unsigned int v5; // ebp
  int v6; // esi
  struct _LIST_ENTRY *Interface; // rax
  _DWORD *v8; // r11
  struct _LIST_ENTRY *v9; // r10
  PVOID *v10; // rcx
  PVOID *v11; // rax
  int v12; // edx
  int v13; // edx

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      97,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  v4 = (int *)*((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 22);
  if ( v4 && *((_DWORD *)a1 + 6) != 8
    || *((_QWORD *)a1 + 7)
    || *((_DWORD *)a1 + 16)
    || *((_QWORD *)a1 + 9)
    || *((_DWORD *)a1 + 20)
    || *((_QWORD *)a1 + 5)
    || *((_DWORD *)a1 + 12) )
  {
    v2 = -1073741306;
  }
  else if ( v4 )
  {
    v6 = *v4;
    Interface = ndisIfFindInterface(*v4);
    v9 = Interface;
    if ( Interface )
    {
      *((_DWORD *)a1 + 22) = HIDWORD(Interface[81].Flink);
      if ( v5 )
      {
        v10 = (PVOID *)ndisIfStackEntryList;
        while ( v10 != &ndisIfStackEntryList && v2 < v5 )
        {
          v11 = v10;
          v10 = (PVOID *)*v10;
          v12 = *((_DWORD *)v11 + 5);
          if ( v12 == v6 )
          {
            *v8 = v12;
            v8[1] = *((_DWORD *)v11 + 4);
            v8 += 2;
            ++v2;
          }
        }
      }
      v2 = v2 < HIDWORD(v9[81].Flink) ? 0x105 : 0;
    }
    else
    {
      v2 = -1073741772;
    }
  }
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  KeReleaseSpinLock(&ndisIfListLock, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      22,
      98,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v2);
  }
  return v2;
}
