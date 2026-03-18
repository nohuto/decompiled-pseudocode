/*
 * XREFs of ?QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z @ 0x1C01C6E40
 * Callers:
 *     NtDxgkGetProcessList @ 0x1C01D7CC0 (NtDxgkGetProcessList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::QueryProcessAdapterInfo(
        ADAPTER_RENDER *this,
        void **a2,
        unsigned int *a3,
        ACCESS_MASK a4)
{
  unsigned int v4; // r15d
  char *v5; // rbp
  __int64 v9; // rsi
  _QWORD *v10; // r14
  _QWORD *v11; // rdi
  struct _OBJECT_TYPE *ObjectType; // rax
  PVOID v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  PVOID Objecta; // [rsp+80h] [rbp+8h]
  NTSTATUS Object; // [rsp+80h] [rbp+8h]

  v4 = 0;
  v5 = (char *)this + 56;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  LODWORD(v9) = *((_DWORD *)this + 64);
  if ( (unsigned int)v9 <= *a3 && a2 )
  {
    v10 = (_QWORD *)((char *)this + 240);
    v9 = 0LL;
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
    {
      do
      {
        if ( *((_BYTE *)v11 + 21) )
        {
          Objecta = *(PVOID *)(*(v11 - 3) + 56LL);
          ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType();
          v13 = Objecta;
          Object = ObOpenObjectByPointer(Objecta, 0x400u, 0LL, a4, ObjectType, 1, &a2[v9]);
          if ( Object >= 0 )
          {
            v9 = (unsigned int)(v9 + 1);
          }
          else
          {
            v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
            *(_QWORD *)(v17 + 24) = v13;
            *(_QWORD *)(v17 + 32) = Object;
            WdLogEvent5_WdWarning(v17);
          }
        }
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != v10 );
      v4 = 0;
    }
  }
  else
  {
    v4 = -1073741789;
  }
  *a3 = v9;
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
