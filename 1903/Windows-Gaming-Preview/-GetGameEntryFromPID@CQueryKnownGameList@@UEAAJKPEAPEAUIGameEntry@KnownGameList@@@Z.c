/*
 * XREFs of ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E120
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003ED74 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F5A4 (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042DE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetGameEntryFromPID(
        CQueryKnownGameList *this,
        unsigned int a2,
        struct KnownGameList::IGameEntry **a3)
{
  unsigned int ProcessNameByPID; // ebx
  __int64 v7; // rdx
  unsigned __int16 *v8; // rsi
  int GameEntryByIdentifier; // eax
  const struct std::nothrow_t *v10; // rdx
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  if ( !a3 )
  {
    ProcessNameByPID = -2147467261;
    v7 = 312LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)ProcessNameByPID);
    return ProcessNameByPID;
  }
  *a3 = 0LL;
  ProcessNameByPID = CQueryKnownGameList::GetProcessNameByPID(this, a2, (const unsigned __int16 **)&v14);
  if ( (ProcessNameByPID & 0x80000000) != 0 )
  {
    v7 = 316LL;
    goto LABEL_3;
  }
  v8 = v14;
  GameEntryByIdentifier = CQueryKnownGameList::GetGameEntryByIdentifier(this, v14, a2, a3);
  v11 = GameEntryByIdentifier;
  ProcessNameByPID = -2147023728;
  if ( GameEntryByIdentifier != -2147023728 )
  {
    if ( GameEntryByIdentifier >= 0 )
    {
      ProcessNameByPID = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x141,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)GameEntryByIdentifier);
      ProcessNameByPID = v11;
    }
  }
  operator delete(v8, v10);
  return ProcessNameByPID;
}
