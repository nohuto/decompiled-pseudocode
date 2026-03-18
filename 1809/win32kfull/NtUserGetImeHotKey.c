/*
 * XREFs of NtUserGetImeHotKey @ 0x1C0214F70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z @ 0x1C01185E8 (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z.c)
 */

__int64 __fastcall NtUserGetImeHotKey(int a1, _DWORD *a2, _DWORD *a3, struct _tagIMEHOTKEYOBJ **a4)
{
  int v8; // ebx
  _DWORD *v9; // rdx
  struct _tagIMEHOTKEYOBJ *v10; // rcx
  _DWORD *v11; // rdx
  _QWORD *v12; // rdx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _tagIMEHOTKEYOBJ *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  struct _tagIMEHOTKEYOBJ **v21; // [rsp+20h] [rbp-28h]
  __int64 v22; // [rsp+28h] [rbp-20h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (_DWORD *)MmUserProbeAddress;
  *v9 = *v9;
  v10 = (struct _tagIMEHOTKEYOBJ *)MmUserProbeAddress;
  v11 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  *v11 = *v11;
  if ( a4 )
  {
    v10 = (struct _tagIMEHOTKEYOBJ *)MmUserProbeAddress;
    v12 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v12 = (_QWORD *)MmUserProbeAddress;
    *v12 = *v12;
    v21 = (struct _tagIMEHOTKEYOBJ **)&v22;
  }
  ImeHotKeyByID = FindImeHotKeyByID(v10, a1);
  v17 = ImeHotKeyByID;
  if ( !ImeHotKeyByID )
  {
    v18 = 1419LL;
LABEL_11:
    UserSetLastError(v18, v14, v15, v16);
    v8 = 0;
    goto LABEL_18;
  }
  v14 = (__int64)v21;
  if ( v21 )
  {
    *v21 = (struct _tagIMEHOTKEYOBJ *)*((_QWORD *)ImeHotKeyByID + 3);
  }
  else if ( *((_QWORD *)ImeHotKeyByID + 3) )
  {
    v18 = 87LL;
    goto LABEL_11;
  }
  v19 = *((unsigned int *)ImeHotKeyByID + 3);
  *a2 = *((_DWORD *)ImeHotKeyByID + 4);
  *a3 = v19;
  if ( a4 )
  {
    v17 = *v21;
    *a4 = *v21;
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v17, v19, v15, v16);
  return v8;
}
