/*
 * XREFs of SmProcessStoreMemoryPriorityRequest @ 0x1406EBA24
 * Callers:
 *     SmSetStoreInformation @ 0x1406EB974 (SmSetStoreInformation.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     SmpKeyedStoreEntryGet @ 0x14008AF3C (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14009A788 (SmKmStoreRefFromStoreIndex.c)
 *     SmRereferenceProcessObject @ 0x14013B2EC (SmRereferenceProcessObject.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessStoreMemoryPriorityRequest(unsigned __int64 a1, int a2, KPROCESSOR_MODE a3)
{
  __int64 v6; // rdx
  int v7; // esi
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  __int64 v11; // rax
  PVOID Object; // [rsp+20h] [rbp-68h] BYREF
  int v13; // [rsp+28h] [rbp-60h]
  __int128 v14; // [rsp+30h] [rbp-58h]
  PVOID v15; // [rsp+40h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  Object = 0LL;
  v7 = 0;
  v13 = 0;
  v14 = 0uLL;
  if ( a2 == 16 )
  {
    if ( a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = a1;
      if ( a1 >= 0x7FFFFFFF0000LL )
        v8 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v8 = *(_BYTE *)v8;
      *(_BYTE *)(v8 + 15) = *(_BYTE *)(v8 + 15);
    }
    v14 = *(_OWORD *)a1;
    if ( (_BYTE)v14 == 1 )
    {
      if ( (v14 & 0xFFFFFC00) != 0 )
      {
        v9 = -1073741811;
      }
      else if ( (v14 & 0x100) != 0 )
      {
        v9 = SmRereferenceProcessObject(*((void **)&v14 + 1), v6, a3, &Object);
        if ( v9 >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)Object + 447, 0x40000u);
          if ( (v14 & 0x200) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process != Object )
            {
              v7 = 1;
              KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
            }
            v15 = Object;
            v11 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_14058C188, (__int64 *)&v15, 0, 0);
            if ( v11 )
              *(_BYTE *)(*(_QWORD *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_WORD *)(v11 + 16) & 0x3FF)
                       + 6023LL) = 1;
            else
              v9 = -1073741632;
          }
          else
          {
            v9 = 0;
          }
        }
      }
      else
      {
        v9 = -1073741637;
      }
    }
    else
    {
      v9 = -1073741735;
    }
  }
  else
  {
    v9 = -1073741306;
  }
  if ( v7 )
    KeUnstackDetachProcess(&ApcState);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v9;
}
