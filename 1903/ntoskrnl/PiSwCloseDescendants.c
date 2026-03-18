/*
 * XREFs of PiSwCloseDescendants @ 0x140730E50
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x140730D70 (PiSwProcessParentRemoveIrp.c)
 *     PiSwCloseDescendants @ 0x140730E50 (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x14074D3EC (PiSwIrpCleanup.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1406FE9E4 (PiSwFindBusRelations.c)
 *     PiSwCloseDescendants @ 0x140730E50 (PiSwCloseDescendants.c)
 *     PiSwCloseDevice @ 0x14074D4CC (PiSwCloseDevice.c)
 */

__int64 __fastcall PiSwCloseDescendants(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi

  result = (__int64)PiSwFindBusRelations(a1);
  if ( result )
  {
    v2 = (_QWORD *)(result + 16);
    v3 = *(_QWORD **)(result + 16);
    while ( v3 != v2 )
    {
      v4 = v3 - 12;
      v3 = (_QWORD *)*v3;
      result = *((unsigned int *)v4 + 1);
      if ( (result & 1) == 0 )
      {
        PiSwCloseDescendants(v4 + 9);
        result = PiSwCloseDevice(v4);
      }
    }
  }
  return result;
}
