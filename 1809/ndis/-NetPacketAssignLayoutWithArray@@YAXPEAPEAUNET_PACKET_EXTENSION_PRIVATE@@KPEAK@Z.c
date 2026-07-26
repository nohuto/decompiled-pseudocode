/*
 * XREFs of ?NetPacketAssignLayoutWithArray@@YAXPEAPEAUNET_PACKET_EXTENSION_PRIVATE@@KPEAK@Z @ 0x1C0108320
 * Callers:
 *     NetPacketComputeSizeAndUpdateExtensions @ 0x1C0082220 (NetPacketComputeSizeAndUpdateExtensions.c)
 * Callees:
 *     <none>
 */

void __fastcall NetPacketAssignLayoutWithArray(struct NET_PACKET_EXTENSION_PRIVATE **a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // r10d
  struct NET_PACKET_EXTENSION_PRIVATE **v6; // r9
  __int64 v7; // rax
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  struct NET_PACKET_EXTENSION_PRIVATE **v10; // rax
  struct NET_PACKET_EXTENSION_PRIVATE *v11; // rdx
  unsigned int v12; // ecx

  *a3 = 0;
  v4 = a2;
  if ( (_DWORD)a2 )
  {
    v6 = a1;
    a2 = (unsigned int)a2;
    do
    {
      v7 = (__int64)*v6++;
      *(_QWORD *)(v7 + 24) = 0LL;
      --a2;
    }
    while ( a2 );
  }
  v8 = 16;
  while ( 1 )
  {
    v9 = 0;
    if ( !v4 )
      break;
    v10 = a1;
    while ( 1 )
    {
      v11 = *v10;
      if ( !*((_QWORD *)*v10 + 3) )
        break;
      ++v9;
      ++v10;
      if ( v9 >= v4 )
        goto LABEL_9;
    }
    if ( !v11 )
      break;
    v12 = -*((_DWORD *)v11 + 5) & (*((_DWORD *)v11 + 5) + v8 - 1);
    v8 = v12 + *((_DWORD *)v11 + 2);
    *((_QWORD *)v11 + 3) = v12;
  }
LABEL_9:
  *a3 = v8;
}
