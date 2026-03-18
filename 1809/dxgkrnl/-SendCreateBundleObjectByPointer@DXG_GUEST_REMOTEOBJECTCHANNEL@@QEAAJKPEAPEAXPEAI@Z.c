/*
 * XREFs of ?SendCreateBundleObjectByPointer@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAPEAXPEAI@Z @ 0x1C023060C
 * Callers:
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C025C6C0 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendCreateBundleObjectByPointer(
        DXG_GUEST_REMOTEOBJECTCHANNEL *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v5; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r14
  _DWORD *v12; // r13
  void **v13; // rdi
  struct _OBJECT_TYPE *ObjectType; // rax
  __int64 v15; // rdx
  void *v16; // rcx
  __int64 v17; // r8
  struct _OBJECT_TYPE *v18; // r12
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v31; // rax
  unsigned int v32; // [rsp+30h] [rbp-69h] BYREF
  struct DXGPROCESS *Current; // [rsp+38h] [rbp-61h]
  DXG_GUEST_REMOTEOBJECTCHANNEL *v34; // [rsp+40h] [rbp-59h]
  signed __int64 v35; // [rsp+48h] [rbp-51h] BYREF
  __int64 v36; // [rsp+50h] [rbp-49h]
  _DWORD v37[3]; // [rsp+58h] [rbp-41h] BYREF
  int v38; // [rsp+64h] [rbp-35h]
  int v39; // [rsp+68h] [rbp-31h]
  _DWORD v40[17]; // [rsp+6Ch] [rbp-2Dh] BYREF

  v5 = a2;
  v34 = this;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  if ( !a4 || !a3 || (unsigned int)(v5 - 1) > 0xF )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v31[3] = a4;
    v31[6] = -1073741811LL;
    v31[4] = a3;
    v31[5] = v5;
    WdLogEvent5_WdWarning(v31);
    return 3221225485LL;
  }
  *a4 = 0;
  v38 = 0;
  v39 = 0;
  v37[2] = 1;
  v37[0] = 1869901170;
  v37[1] = -1073741823;
  memset(v40, 0, sizeof(v40));
  v32 = 16;
  v11 = 0LL;
  v35 = 0xC00000016F746D72uLL;
  v36 = 2LL;
  if ( !(_DWORD)v5 )
  {
LABEL_14:
    v39 = v5;
    v20 = *((_DWORD *)Current + 98);
    v21 = *((_QWORD *)v34 + 1);
    v40[0] |= 1u;
    v38 = v20;
    v22 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, signed __int64 *, unsigned int *))(*(_QWORD *)v21 + 32LL))(
            v21,
            v37,
            88LL,
            &v35,
            &v32);
    v26 = v22;
    if ( v22 < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v27[3] = v26;
      goto LABEL_18;
    }
    if ( v32 == 16 )
    {
      if ( (_DWORD)v36 == 2 )
      {
        LODWORD(v26) = HIDWORD(v35);
        if ( v35 >= 0 )
          *a4 = HIDWORD(v36);
        return (unsigned int)v26;
      }
      v28 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      v29 = (int)v36;
    }
    else
    {
      v28 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      v29 = v32;
    }
    *(_QWORD *)(v28 + 24) = v29;
    *(_QWORD *)(v28 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v28);
    LODWORD(v26) = -1073741823;
    return (unsigned int)v26;
  }
  v12 = &v40[1];
  v13 = a3;
  while ( 1 )
  {
    ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(*v13);
    v18 = ObjectType;
    if ( ObjectType == g_pDxgkSharedAllocationObjectType )
    {
      v16 = *v13;
      v19 = *((_DWORD *)*v13 + 10);
      goto LABEL_12;
    }
    if ( ObjectType != g_pDxgkSharedSyncObjectType )
      break;
    v19 = *((_DWORD *)*v13 + 2);
LABEL_12:
    *v12 = v19;
    if ( !v19 )
    {
      LODWORD(v26) = -1073741811;
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      v27[3] = (unsigned int)v40[v11 + 1];
      v27[4] = a3[v11];
      v27[5] = v18;
      v27[6] = -1073741811LL;
      goto LABEL_18;
    }
    v11 = (unsigned int)(v11 + 1);
    ++v13;
    ++v12;
    if ( (unsigned int)v11 >= (unsigned int)v5 )
      goto LABEL_14;
  }
  LODWORD(v26) = -1073741811;
  v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
  v27[3] = a3[v11];
  v27[4] = v18;
  v27[5] = -1073741811LL;
LABEL_18:
  WdLogEvent5_WdWarning(v27);
  return (unsigned int)v26;
}
