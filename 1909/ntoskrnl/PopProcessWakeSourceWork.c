/*
 * XREFs of PopProcessWakeSourceWork @ 0x1408A73A4
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x1402F73F0 (PopUpdateWakeSourceWorker.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     wcsncmp @ 0x1401A2770 (wcsncmp.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PopFreeWakeSource @ 0x1408A72D8 (PopFreeWakeSource.c)
 *     PopNewWakeSource @ 0x1408A7354 (PopNewWakeSource.c)
 *     PopWakeSourceGetDeviceProperty @ 0x1408A756C (PopWakeSourceGetDeviceProperty.c)
 *     PopWakeSourceIsParent @ 0x1408A7634 (PopWakeSourceIsParent.c)
 */

__int64 __fastcall PopProcessWakeSourceWork(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // r13
  _QWORD *v4; // r14
  __int64 v5; // rbp
  unsigned int v6; // r12d
  _QWORD **v7; // r15
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  unsigned int v10; // edi
  PVOID i; // rax
  unsigned __int16 v12; // ax
  void *v13; // rbx
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  PVOID PoolWithTag; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  if ( v3 )
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(_DWORD *)(v5 + 136);
  v7 = (_QWORD **)(*(_QWORD *)(a1 + 24) + 24LL);
  v8 = *v7;
  while ( v8 != v7 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
    if ( !*((_DWORD *)v9 + 4) )
    {
      if ( *((_DWORD *)v9 + 18) <= v6 )
      {
        if ( *((_DWORD *)v9 + 18) < v6 )
        {
          for ( i = *(PVOID *)(v5 + 16); ; i = (PVOID)*((_QWORD *)v13 + 2) )
          {
            v13 = 0LL;
            if ( i != IopRootDeviceNode )
              v13 = i;
            if ( !v13 )
              break;
            v12 = *((_WORD *)v13 + 20);
            if ( v12 == *((_WORD *)v9 + 12)
              && !wcsncmp(*((const wchar_t **)v13 + 6), (const wchar_t *)v9[4], (unsigned __int64)v12 >> 1) )
            {
              v4 = v9;
              goto LABEL_20;
            }
          }
        }
      }
      else if ( (unsigned __int8)PopWakeSourceIsParent(v5, v9 + 3) )
      {
        v10 = -1073741823;
LABEL_24:
        v4 = 0LL;
        v15 = 0LL;
        goto LABEL_26;
      }
    }
  }
LABEL_20:
  v14 = PopNewWakeSource(0);
  v15 = v14;
  if ( !v14 )
  {
    v10 = -1073741670;
    goto LABEL_24;
  }
  v14[18] = v6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(v5 + 40), 0x206D654Du);
  *((_QWORD *)v15 + 4) = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    PopFreeWakeSource(v15);
    goto LABEL_24;
  }
  *((_WORD *)v15 + 13) = *(_WORD *)(v5 + 40);
  RtlCopyUnicodeString((PUNICODE_STRING)(v15 + 6), (PCUNICODE_STRING)(v5 + 40));
  PopWakeSourceGetDeviceProperty(v15 + 10, 9LL, v3);
  PopWakeSourceGetDeviceProperty(v15 + 14, 0LL, v3);
  v10 = 0;
LABEL_26:
  *a2 = v15;
  *a3 = v4;
  return v10;
}
