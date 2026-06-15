/*
 * XREFs of ?GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180031210
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D64C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18003281C (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     memset_0 @ 0x180034F8E (memset_0.c)
 */

char *__fastcall ATL::CDacl::CAccessObjectAce::GetACE(ATL::CDacl::CAccessObjectAce *this)
{
  char *v1; // rbx
  char *v3; // r14
  __int64 v4; // rbx
  int v5; // edi
  DWORD LengthSid; // ebp
  int v7; // eax
  DWORD v8; // ebp
  char *v9; // rax
  ATL::Checked *v10; // rdi
  int v11; // eax
  __int128 *v12; // rax
  int v13; // ecx
  __int128 v14; // xmm0
  __int128 *v15; // rax
  __int128 v16; // xmm0
  DWORD v17; // eax
  unsigned __int64 v19; // [rsp+20h] [rbp-8h]

  v1 = (char *)*((_QWORD *)this + 17);
  if ( !v1 )
  {
    v3 = (char *)this + 16;
    v4 = *((_QWORD *)this + 20);
    v5 = *((_QWORD *)this + 19) != 0LL ? 44 : 28;
    LengthSid = GetLengthSid((char *)this + 16);
    v7 = v5 - 16;
    if ( v4 )
      v7 = v5;
    v8 = v7 + LengthSid;
    v9 = (char *)malloc(v8);
    v1 = v9;
    if ( !v9 )
      ATL::AtlThrowImpl(-2147024882);
    memset_0(v9, 0, v8);
    *((_WORD *)v1 + 1) = v8;
    v10 = (ATL::Checked *)(v1 + 44);
    v1[1] = *((_BYTE *)this + 132);
    *v1 = 6 - (*((_BYTE *)this + 144) != 0);
    v11 = *((_DWORD *)this + 32);
    *((_DWORD *)v1 + 2) = 0;
    *((_DWORD *)v1 + 1) = v11;
    v12 = (__int128 *)*((_QWORD *)this + 19);
    if ( v12 )
    {
      v14 = *v12;
      *((_DWORD *)v1 + 2) = 1;
      v13 = 3;
      *(_OWORD *)(v1 + 12) = v14;
    }
    else
    {
      v10 = (ATL::Checked *)(v1 + 28);
      v13 = 2;
    }
    v15 = (__int128 *)*((_QWORD *)this + 20);
    if ( v15 )
    {
      v16 = *v15;
      if ( *((_QWORD *)this + 19) )
        *(_OWORD *)(v1 + 28) = v16;
      else
        *(_OWORD *)(v1 + 12) = v16;
      *((_DWORD *)v1 + 2) = v13;
    }
    else
    {
      v10 = (ATL::Checked *)((char *)v10 - 16);
    }
    v17 = GetLengthSid(v3);
    ATL::Checked::memcpy_s(v10, (void *)(v10 - (ATL::Checked *)v1), (unsigned __int64)v3, (const void *)v17, v19);
    *((_QWORD *)this + 17) = v1;
  }
  return v1;
}
