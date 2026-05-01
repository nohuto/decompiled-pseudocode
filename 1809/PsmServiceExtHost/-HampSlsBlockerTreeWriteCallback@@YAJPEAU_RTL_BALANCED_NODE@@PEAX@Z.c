/*
 * XREFs of ?HampSlsBlockerTreeWriteCallback@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006E6B0
 * Callers:
 *     ?HampSlsEventWriteWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006E980 (-HampSlsEventWriteWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampSystemSlsWritePhaseBlockerEvent@@YAXPEA_KEPEAU_HAM_SLEEP_STUDY_BLOCKER_NAME@@PEBU_GUID@@2_K@Z @ 0x180066168 (-HampSystemSlsWritePhaseBlockerEvent@@YAXPEA_KEPEAU_HAM_SLEEP_STUDY_BLOCKER_NAME@@PEBU_GUID@@2_K.c)
 *     ?HampSlsBlockerEntryUpdateBlockType@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18006E600 (-HampSlsBlockerEntryUpdateBlockType@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK.c)
 *     ?HampSlsCreateGuid@@YAJPEAU_GUID@@@Z @ 0x18006E810 (-HampSlsCreateGuid@@YAJPEAU_GUID@@@Z.c)
 *     ?HampSlsHostBlockerNameFromPsmKey@@YAXPEAU_RM_PSM_KEY@@PEAW4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_BLOCKER_NAME@@@Z @ 0x18006EBB8 (-HampSlsHostBlockerNameFromPsmKey@@YAXPEAU_RM_PSM_KEY@@PEAW4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_.c)
 */

__int64 __fastcall HampSlsBlockerTreeWriteCallback(struct _RTL_BALANCED_NODE *a1, char *a2)
{
  char Right; // dl
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edi
  struct _RTL_BALANCED_NODE *v9; // rbx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  struct _GUID v12; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v13; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v14[528]; // [rsp+60h] [rbp-A0h] BYREF

  Right = (char)a1[1].Right;
  *(_QWORD *)&v12.Data1 = 0LL;
  *(_QWORD *)v12.Data4 = 0LL;
  *(_QWORD *)&v13.Data1 = 0LL;
  *(_QWORD *)v13.Data4 = 0LL;
  HampSlsBlockerEntryUpdateBlockType((__int64)a1, Right);
  v5 = 0LL;
  v6 = &a1[2].Children[1];
  v7 = 4LL;
  v8 = 1;
  do
  {
    v5 += *v6++;
    --v7;
  }
  while ( v7 );
  if ( v5 )
  {
    HampSlsHostBlockerNameFromPsmKey(
      (struct _RM_PSM_KEY *)&a1[1].Children[0][1],
      0LL,
      (struct _HAM_SLEEP_STUDY_BLOCKER_NAME *)v14);
    if ( !(unsigned int)HampSlsCreateGuid(&v12) )
    {
      HampSystemSlsWritePhaseBlockerEvent(
        (unsigned __int64 *)(*(_QWORD *)a2 + 72LL),
        a2[24],
        (struct _HAM_SLEEP_STUDY_BLOCKER_NAME *)v14,
        &v12,
        &GUID_SLEEPSTUDY_BLOCKER_PLM_PHASE,
        v5);
      v11 = 1;
      do
      {
        v9 = a1[2].Children[v8];
        if ( v9 )
        {
          HampSlsHostBlockerNameFromPsmKey(
            (struct _RM_PSM_KEY *)&a1[1].Children[0][1],
            (enum _HAM_PDC_BLOCK_TYPE *)&v11,
            (struct _HAM_SLEEP_STUDY_BLOCKER_NAME *)v14);
          if ( (unsigned int)HampSlsCreateGuid(&v13) )
            return 0LL;
          HampSystemSlsWritePhaseBlockerEvent(
            (unsigned __int64 *)(*(_QWORD *)a2 + 72LL),
            a2[24],
            (struct _HAM_SLEEP_STUDY_BLOCKER_NAME *)v14,
            &v13,
            &v12,
            (char)v9);
        }
        v11 = ++v8;
      }
      while ( v8 < 5 );
    }
  }
  return 0LL;
}
