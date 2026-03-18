/*
 * XREFs of EnableDisableCMOSRegions @ 0x1C0023E80
 * Callers:
 *     ACPITableLoad @ 0x1C0021410 (ACPITableLoad.c)
 *     EnableDisableCMOSRegions @ 0x1C0023E80 (EnableDisableCMOSRegions.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C00141E4 (HeapFree.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     AMLIIsNamedChildPresent @ 0x1C0015950 (AMLIIsNamedChildPresent.c)
 *     EnableDisableCMOSRegions @ 0x1C0023E80 (EnableDisableCMOSRegions.c)
 *     AMLIGetFirstChild @ 0x1C0023FDC (AMLIGetFirstChild.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall EnableDisableCMOSRegions(__int64 *a1)
{
  unsigned int v2; // ebp
  __int64 Child; // rdi
  __int16 v4; // ax
  KIRQL v5; // dl
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 *v12; // rbx
  int v13; // esi
  __int64 *v14; // rcx
  _QWORD v15[10]; // [rsp+30h] [rbp-78h] BYREF

  v2 = 0;
  Child = AMLIGetFirstChild(a1);
  if ( Child )
  {
    do
    {
      v4 = *(_WORD *)(*(_QWORD *)Child + 66LL);
      if ( v4 == 6 )
      {
        v10 = EnableDisableCMOSRegions(Child);
        if ( v10 < 0 )
          v2 = v10;
      }
      else if ( v4 == 10 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)Child + 96LL);
        if ( v11 )
        {
          if ( *(_BYTE *)(v11 + 12) == 5 && AMLIIsNamedChildPresent(a1, 1145653343) )
          {
            v12 = AMLIGetNamedChild(a1, 1195725407);
            if ( v12 )
            {
              memset(v15, 0, sizeof(v15));
              WORD1(v15[0]) = 1;
              v15[2] = 5LL;
              WORD1(v15[5]) = 1;
              v15[7] = 1LL;
              v13 = AMLIAsyncEvalObject(v12, 0LL, 2u, v15, 0LL, 0LL);
              AMLIDereferenceHandleEx((volatile signed __int32 *)v12);
              if ( v13 < 0 )
                v2 = v13;
            }
          }
        }
      }
      v5 = ExAcquireSpinLockShared(&ACPINamespaceLock);
      v6 = *(_QWORD *)(*(_QWORD *)Child + 16LL);
      if ( !v6 || (v7 = **(_QWORD **)Child, v7 == v6 + 24) )
      {
        v8 = 0LL;
      }
      else
      {
        v8 = v7 + 120;
        dword_1C0082858 = 0;
        pszDest = 0;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      }
      ExReleaseSpinLockShared(&ACPINamespaceLock, v5);
      dword_1C0082858 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(Child + 8), 0xFFFFFFFF) == 1 )
      {
        v14 = *(__int64 **)Child;
        if ( Child == *(_QWORD *)Child + 120LL )
        {
          DereferenceObjectEx((unsigned __int64)v14);
        }
        else
        {
          DereferenceObjectEx((unsigned __int64)v14);
          HeapFree(Child);
        }
      }
      Child = v8;
    }
    while ( v8 );
  }
  return v2;
}
