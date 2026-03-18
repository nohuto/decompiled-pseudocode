/*
 * XREFs of _RegisterPointerDeviceNotifications @ 0x1C013F084
 * Callers:
 *     NtUserRegisterPointerDeviceNotifications @ 0x1C013EFB0 (NtUserRegisterPointerDeviceNotifications.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterPointerDeviceNotifications(struct _LIST_ENTRY *a1, int a2)
{
  struct _LIST_ENTRY *Flink; // r8
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  struct _LIST_ENTRY *v11; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  Flink = gPointerDeviceClients.Flink;
  v5 = 0;
  while ( Flink != &gPointerDeviceClients )
  {
    v11 = Flink - 1;
    Flink = Flink->Flink;
    if ( v11->Flink == a1 )
      return v5;
  }
  v6 = (_QWORD *)Win32AllocPool(32LL, 2020635477LL);
  v7 = v6;
  if ( v6 )
  {
    v12[0] = v6;
    v12[1] = a1;
    *v6 = 0LL;
    HMAssignmentLock(v12);
    *((_DWORD *)v7 + 2) = a2;
    v8 = v7 + 2;
    v9 = (_QWORD *)qword_1C032D068;
    if ( *(struct _LIST_ENTRY **)qword_1C032D068 != &gPointerDeviceClients )
      __fastfail(3u);
    *v8 = &gPointerDeviceClients;
    v5 = 1;
    v7[3] = v9;
    *v9 = v8;
    qword_1C032D068 = (__int64)(v7 + 2);
  }
  return v5;
}
