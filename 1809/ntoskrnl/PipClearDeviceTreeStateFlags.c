/*
 * XREFs of PipClearDeviceTreeStateFlags @ 0x14057A6E0
 * Callers:
 *     IoFreePoDeviceNotifyList @ 0x14056E534 (IoFreePoDeviceNotifyList.c)
 *     PopDisengageDirectedDrips @ 0x140869AD4 (PopDisengageDirectedDrips.c)
 * Callees:
 *     <none>
 */

ULONG_PTR __fastcall PipClearDeviceTreeStateFlags(int a1)
{
  ULONG_PTR result; // rax
  ULONG_PTR i; // rdx
  int v3; // r8d
  ULONG_PTR v4; // rcx

  result = IopRootDeviceNode;
  for ( i = *(_QWORD *)(IopRootDeviceNode + 8); i; i = *(_QWORD *)(i + 8) )
    result = i;
  if ( result != IopRootDeviceNode )
  {
    v3 = ~a1;
    do
    {
      *(_DWORD *)(result + 704) &= v3;
      v4 = *(_QWORD *)result;
      if ( *(_QWORD *)result )
      {
        do
        {
          result = v4;
          v4 = *(_QWORD *)(v4 + 8);
        }
        while ( v4 );
      }
      else
      {
        result = *(_QWORD *)(result + 16);
      }
    }
    while ( result != IopRootDeviceNode );
  }
  return result;
}
