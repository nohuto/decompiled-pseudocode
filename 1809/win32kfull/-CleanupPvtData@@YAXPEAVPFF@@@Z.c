/*
 * XREFs of ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x1C029D020
 * Callers:
 *     <none>
 * Callees:
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01B8390 (--1SEMOBJ@@QEAA@XZ.c)
 *     ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C02519C4 (--0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 */

void __fastcall CleanupPvtData(struct PFF *a1)
{
  unsigned int CurrentThreadId; // eax
  __int64 v3; // r8
  __int64 i; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJ::SEMOBJ((SEMOBJ *)&v5, ghsemPublicPFT);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v3 = *((_QWORD *)a1 + 18);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 8) & 4) != 0 && *(_DWORD *)(v3 + 12) == CurrentThreadId )
    {
      i = *((_QWORD *)a1 + 18);
      *((_QWORD *)a1 + 18) = *(_QWORD *)(v3 + 16);
LABEL_11:
      Win32FreePool(i);
    }
    else
    {
      for ( i = *(_QWORD *)(v3 + 16); i; i = *(_QWORD *)(i + 16) )
      {
        if ( (*(_DWORD *)(i + 8) & 4) != 0 && *(_DWORD *)(i + 12) == CurrentThreadId )
        {
          *(_QWORD *)(v3 + 16) = *(_QWORD *)(i + 16);
          goto LABEL_11;
        }
        v3 = i;
      }
    }
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v5);
}
