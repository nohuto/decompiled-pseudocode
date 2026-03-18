/*
 * XREFs of PowerRes @ 0x1C0023590
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     PushScope @ 0x1C00224A8 (PushScope.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall PowerRes(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rsi
  unsigned int NameSpaceObject; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  char v13; // cl
  __int64 v14; // rdx

  v2 = a2 + 8;
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(a2[10] + 32),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      a2 + 8,
                      0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*v2 + 66) = 11;
    *(_DWORD *)(*v2 + 88) = 2;
    *(_WORD *)(*v2 + 64) |= 0x40u;
    v6 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1397903432, *(_DWORD *)(*v2 + 88));
    *(_QWORD *)(*v2 + 96) = v6;
    if ( v6 )
    {
      memset(*(void **)(*v2 + 96), 0, *(unsigned int *)(*v2 + 88));
      v10 = 0LL;
      v11 = 0LL;
      v12 = *(_QWORD *)(*v2 + 96);
      do
      {
        v13 = *(_BYTE *)(a2[10] + v11 + 56);
        v11 += 40LL;
        *(_BYTE *)(v10 + v12) = v13;
        ++v10;
      }
      while ( v11 < 80 );
      v14 = *v2;
      if ( ghCreate )
      {
        ghCreate(11LL, v14 + 120);
        v14 = *v2;
      }
      return (unsigned int)PushScope(
                             a1,
                             *(_QWORD *)(a1 + 120),
                             a2[5],
                             0LL,
                             v14,
                             *(_QWORD *)(a1 + 88),
                             *(_QWORD *)(a1 + 320),
                             a2[11]);
    }
    else
    {
      NameSpaceObject = -1073741670;
      LogError(3221225626LL, v7, v8, v9);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(146, 0, 0, 0, 0LL);
    }
  }
  return NameSpaceObject;
}
