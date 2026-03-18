/*
 * XREFs of ?UnusableNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x1801FAE20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CD3DDeviceManager::UnusableNotification(CD3DDeviceManager *this, struct CMILPoolResource *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm3
  __int64 v10; // rcx
  __int64 v11; // xmm2_8
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v4 = *((_DWORD *)this + 52);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *((_QWORD *)this + 16);
    while ( *(_QWORD *)(v6 + 24 * v5) != (((unsigned __int64)a2 - 496) & -(__int64)(a2 != 0LL)) )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v4 )
        goto LABEL_8;
    }
    v7 = v4 - 1;
    *((_DWORD *)this + 52) = v7;
    if ( (_DWORD)v5 != (_DWORD)v7 )
    {
      v8 = 3 * v5;
      v9 = *(_OWORD *)(v6 + 8 * v8);
      v10 = 3 * v7;
      v11 = *(_QWORD *)(v6 + 8 * v8 + 16);
      *(_OWORD *)(v6 + 8 * v8) = *(_OWORD *)(v6 + 8 * v10);
      *(_QWORD *)(v6 + 8 * v8 + 16) = *(_QWORD *)(v6 + 8 * v10 + 16);
      v12 = 3LL * *((unsigned int *)this + 52);
      v13 = *((_QWORD *)this + 16);
      *(_OWORD *)(v13 + 8 * v12) = v9;
      *(_QWORD *)(v13 + 8 * v12 + 16) = v11;
    }
  }
LABEL_8:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
}
