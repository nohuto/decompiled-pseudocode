/*
 * XREFs of ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00583C0
 * Callers:
 *     NtDCompositionCreateConnection @ 0x1C0058280 (NtDCompositionCreateConnection.c)
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C00104D4 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0012950 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1C0058318 (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C005849C (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Create(void *a1, struct HDCOMPOSITIONCONNECTION__ **a2)
{
  struct DirectComposition::CProcessData *v4; // rax
  struct DirectComposition::CProcessData *v5; // rdi
  struct _ERESOURCE *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edx
  DirectComposition::CConnection *v10; // rsi
  int v11; // ebx
  struct HDCOMPOSITIONCONNECTION__ *v12; // rax
  struct DirectComposition::CConnection *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  v4 = DirectComposition::CProcessData::Current();
  v5 = v4;
  if ( v4 )
  {
    v6 = (struct _ERESOURCE *)*((_QWORD *)v4 + 4);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v6, 1u);
    if ( *((_QWORD *)v5 + 3) || !UserIsCurrentProcessDwm(v7) )
    {
      v11 = -1073741790;
    }
    else
    {
      v8 = DirectComposition::CConnection::ReclaimSessionGlobalConnection(&v14);
      v10 = v14;
      v11 = v8;
      if ( v8 < 0 || (v11 = DirectComposition::CConnection::Connect(v14, a1), v11 < 0) )
      {
        if ( v10 )
          DirectComposition::CConnection::Release(v10, v9);
      }
      else
      {
        *((_QWORD *)v5 + 2) += 4LL;
        v12 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)v5 + 2);
        *((_QWORD *)v5 + 3) = v10;
        *a2 = v12;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)v5 + 4));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v11;
}
