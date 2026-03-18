/*
 * XREFs of ?GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z @ 0x1C0279328
 * Callers:
 *     ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1C0272CA4 (-GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z.c)
 * Callees:
 *     McTemplateK0pqxxqttqq @ 0x1C0046D10 (McTemplateK0pqxxqttqq.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::GetFrameInfo(OUTPUTDUPL_CONTEXT *this, const GUID *a2)
{
  LARGE_INTEGER *v2; // rax
  __int64 v4; // rdx
  BOOL v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = (LARGE_INTEGER *)*((_QWORD *)this + 33);
  v4 = 0LL;
  if ( v2[2].HighPart )
  {
    *(LARGE_INTEGER *)a2->Data4 = *v2;
    *(_DWORD *)&a2[1].Data4[4] = *(_DWORD *)(*((_QWORD *)this + 33) + 28LL);
    a2[2].Data1 = *(_DWORD *)(*((_QWORD *)this + 33) + 32LL);
    v6 = *(_DWORD *)(*((_QWORD *)this + 33) + 36LL) & 1;
  }
  else
  {
    *(_QWORD *)a2->Data4 = 0LL;
    v6 = 0;
    *(_QWORD *)&a2[1].Data4[4] = 0LL;
  }
  *(_DWORD *)&a2[2].Data2 = v6;
  v7 = *((_QWORD *)this + 33);
  if ( *(_DWORD *)(v7 + 40) )
    v8 = *(unsigned int *)(*(_QWORD *)(v7 + 88) + 8LL);
  else
    v8 = 0LL;
  *(_DWORD *)&a2[2].Data4[4] = v8;
  v9 = *((_QWORD *)this + 33);
  if ( *(_DWORD *)(v9 + 16) == 2 )
  {
    *(_QWORD *)&a2->Data1 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL);
    a2[1].Data1 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 4LL);
    *(_DWORD *)&a2[1].Data2 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 16LL);
    *(_DWORD *)a2[1].Data4 = **(_DWORD **)(*((_QWORD *)this + 33) + 8LL);
    v8 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
    v4 = (unsigned int)(16 * *(_DWORD *)(v8 + 24) + 24 * *(_DWORD *)(v8 + 44));
  }
  else
  {
    *(_QWORD *)&a2->Data1 = 0LL;
    *(_QWORD *)&a2[1].Data1 = 0LL;
    *(_DWORD *)a2[1].Data4 = 0;
  }
  *(_DWORD *)a2[2].Data4 = v4;
  *((_DWORD *)this + 77) = 1;
  *((_DWORD *)this + 78) = 1;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqxxqttqq(v8, v4, a2);
}
