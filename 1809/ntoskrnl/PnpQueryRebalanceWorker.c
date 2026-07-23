/*
 * XREFs of PnpQueryRebalanceWorker @ 0x1408408C8
 * Callers:
 *     PnpQueryRebalance @ 0x140840810 (PnpQueryRebalance.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406FC3D4 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpCancelStopDeviceNode @ 0x140840638 (PnpCancelStopDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x140840A64 (PnpQueryStopDeviceNode.c)
 */

__int64 __fastcall PnpQueryRebalanceWorker(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        char a6)
{
  int v6; // eax
  int v7; // r15d
  _DWORD *v8; // r14
  __int64 v11; // r13
  int StopDeviceNode; // eax
  unsigned int v14; // edi
  __int64 v15; // rbx
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // ecx
  int v21; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v22; // [rsp+70h] [rbp+18h]

  v22 = a3;
  v6 = *(_DWORD *)(BugCheckParameter2 + 300);
  v7 = 0;
  v8 = a5;
  v11 = a2;
  if ( v6 == 776 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000) == 0 )
    {
      LOBYTE(a2) = a6;
      StopDeviceNode = PnpQueryStopDeviceNode(BugCheckParameter2, a2);
      v7 = StopDeviceNode;
      if ( StopDeviceNode < 0 )
      {
        PnpCancelStopDeviceNode(BugCheckParameter2);
        if ( v8 )
          *v8 = 1;
      }
      else
      {
        if ( StopDeviceNode == 281 )
          PipSetDevNodeFlags(BugCheckParameter2, 1024);
        v14 = *a3;
        v15 = *(_QWORD *)(BugCheckParameter2 + 32);
        v16 = (_QWORD *)(v11 + ((unsigned __int64)v14 << 6));
        memset(v16, 0, 0x40uLL);
        v16[3] = 0LL;
        *v16 = v15;
        *((_DWORD *)v16 + 3) = 4;
        PnpGetResourceRequirementsForAssignTable((unsigned __int64)v16, v11 + ((unsigned __int64)(v14 + 1) << 6), &v21);
        v17 = (unsigned __int64)(unsigned int)*v22 << 6;
        if ( *(int *)(v17 + v11 + 56) < 0 )
        {
          v7 = *(_DWORD *)(v17 + v11 + 56);
          PnpCancelStopDeviceNode(BugCheckParameter2);
          if ( v8 )
            *v8 = 2;
        }
        else if ( (*(_DWORD *)(v17 + v11 + 8) & 0x20) == 0 )
        {
          ++*v22;
        }
      }
      goto LABEL_20;
    }
    goto LABEL_15;
  }
  v18 = v6 - 769;
  if ( v18 > 0x11 || (v19 = 196871, !_bittest(&v19, v18)) )
  {
LABEL_15:
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000) == 0 )
    {
      v7 = -1073741823;
      if ( a5 )
        *a5 = 3;
      goto LABEL_21;
    }
  }
  if ( !a5 )
    goto LABEL_23;
  *a5 = 4;
LABEL_20:
  if ( v7 < 0 )
  {
LABEL_21:
    if ( a4 )
      *a4 = BugCheckParameter2;
    return (unsigned int)v7;
  }
LABEL_23:
  if ( a4 )
    *a4 = 0LL;
  if ( v8 )
    *v8 = 0;
  return (unsigned int)v7;
}
